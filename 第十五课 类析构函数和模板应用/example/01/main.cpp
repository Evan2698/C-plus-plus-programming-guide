#include <iostream>
#include <atomic>
#include <memory>

#define INTERFACE struct

INTERFACE IUnknown
{   
    virtual void AddRef() = 0; // Pure virtual function
    virtual void Release() = 0; // Pure virtual function
};


INTERFACE IAnimal: public IUnknown
{
    virtual void makeSound() = 0; // Pure virtual function  
};



template <typename T>
class RefCountedBase : public T
{
private:
    std::atomic<int> refCount;

protected:
    RefCountedBase() : refCount(0) {}
    virtual ~RefCountedBase()
    {
        std::cout << "RefCountedBase destructor called" << std::endl;
    }

public:
    void AddRef()
    {
        refCount.fetch_add(1, std::memory_order_relaxed);
    }

    void Release()
    {
        if (refCount.fetch_sub(1, std::memory_order_acq_rel) == 1)
        {
            delete this; // Calls the destructor of the derived class
        }
    }
};

// 栈对象管理堆对象

template <typename T>
class SmartPointer
{
private:
    T* ptr;

public:
    explicit SmartPointer(T* p = nullptr) : ptr(p)
    {
        if (ptr)
        {
            ptr->AddRef();
        }
    }

    SmartPointer(const SmartPointer& other) : ptr(other.ptr)
    {
        if (ptr)
        {
            ptr->AddRef();
        }
    }

    SmartPointer& operator=(const SmartPointer& other)
    {
        if (this != &other)
        {
            if (ptr)
            {
                ptr->Release();
            }
            ptr = other.ptr;
            if (ptr)
            {
                ptr->AddRef();
            }
        }
        return *this;
    }

    ~SmartPointer()
    {
        if (ptr)
        {
            ptr->Release();
        }
    }

    T* operator->() const
    {
        return ptr;
    }

    T& operator*() const
    {
        return *ptr;
    }

    T* get() const
    {
        return ptr;
    }
};




class AnimalsBase : public RefCountedBase<IAnimal> 
{
public:
    AnimalsBase() = default;

    virtual ~AnimalsBase()
    {
        std::cout << "AnimalsBase destructor called" << std::endl;
    }

};


class Dog : public AnimalsBase
{
public:
    Dog() = default;

    void makeSound() override
    {
        std::cout << "Woof!" << std::endl;
    }

   virtual ~Dog()
    {
        std::cout << "Dog destructor called" << std::endl;
    }   
};

int main()
{
    // IAnimal* animal = new Dog();
    // animal->makeSound(); // Outputs: Woof!
    // delete animal; // Calls the destructor of Dog and then AnimalsBase Memeory leaks !!!!

    // std::cout << "------------------------" << std::endl;

    SmartPointer<IAnimal> animal2 (new Dog);
    animal2->makeSound(); // Outputs: Woof!
   
    // std::weak_ptr<IAnimal> animal2;
    // std::unique_ptr<IAnimal> animal1 (new Dog);
   // std::shared_ptr<Dog> animal3 (new Dog); 
    //animal3->makeSound(); // Outputs: Woof!



    

 
    return 0;
}



//
//// A---->1  ------> 在一个低版本运行期库编译的， new 
///   ----->2----->   都是在高版本运行期上
///  --------------> 都是在高版本运行期上  delete 归还