#include <iostream>

struct MyClass{
    public:
    MyClass(){
            std::cout << "MyClass constructor" << std::endl;
        }

        MyClass(MyClass& b){
            std::cout << "MyClass copy constructor" << std::endl;
            a = b.a;
        }

        MyClass& operator=(const MyClass& b){
            std::cout << "MyClass copy assignment operator" << std::endl;
            a = b.a;
            return *this;
        }

        MyClass(MyClass&& other){
            std::cout << "MyClass move constructor" << std::endl;
            a = other.a;
        }

        ~MyClass(){
            std::cout << "MyClass destructor" << std::endl;
        }

        int a;       
};

MyClass buildA(){
    MyClass a;
    a.a = 10;
    return a;
} 


struct MyClassB
{
    MyClassB():_pa(0){
        std::cout << "MyClassB constructor" << std::endl;
        _pa = new int(4);
    }

    ~MyClassB(){
        std::cout << "MyClassB destructor" << std::endl;
        if (_pa != 0){
            delete _pa;
            _pa = 0;
        }
    }

    MyClassB(const MyClassB& other){
        std::cout << "MyClassB copy constructor" << std::endl;
        _pa = new int(*other._pa);
    }


    int *_pa;    
};




int main(){

    // MyClass a = buildA();
    // a.a = 20;   


    MyClassB b;
    MyClassB c = b;
    return 0;
}