#include <iostream>

class A
{
};

class B
{
public:
    void show()
    {
        std::cout << "B class show function" << std::endl;
    }
};

class C
{
public:
    void show()
    {
        std::cout << "c class show function" << std::endl;
    }

    char a;
};

class C1
{
public:
    void show()
    {
        std::cout << "c1 class show function" << std::endl;
    }

    int a;
    int b;
    char c;
};

class D
{
public:
    void show()
    {
        std::cout << "d class show function" << std::endl;
    }

    long a;
    int b;
    char c;
};

class E
{
public:
    virtual void show()
    {
        std::cout << "e class show function" << std::endl;
    }

    long a;
    int b;
    char c;
    char d;
};

#pragma pack(push, 1)
class F
{
public:
    virtual void show()
    {
        std::cout << "f class show function" << std::endl;
    }

    long a;
    int b;
    char c;
    char d;
};
#pragma pack(pop)


class F1
{
public:
    virtual void show()
    {
        std::cout << "f class show function" << std::endl;
    }

    long a;
    int b;
    char c;
    char d;
};

class G
{
public:
    virtual void show()
    {
        std::cout << "g class show function" << std::endl;
    }

    virtual void display()
    {
        std::cout << "g class display function" << std::endl;
    }

    long a;
};

#define interface struct

interface IBase
{
    virtual void show() = 0;
    virtual int get() = 0;
};


int main()
{

    // use of pointer to call member function
    void (G::*pShow)() = &G::show;
    void (G::*pDisplay)() = &G::display;

    G g;
    (g.*pShow)();

    std::cout << "------------------------------------------------" << std::endl;
    std::cout << "show address: " << (void *)(g.*pShow) << std::endl;
    std::cout << "display address: " << (void *)(g.*pDisplay) << std::endl;
    // virtual function table
    //uintptr_t *vptr = (uintptr_t *)&g;
    //uintptr_t *vtalbe = (uintptr_t *)*vptr;
    unsigned long *vptr = (unsigned long *)&g;
    unsigned long *vtable = (unsigned long *)*vptr;
  
    std::cout << std::hex << "virtual table: " << (void*) vtable << std::endl;
    std::cout << "show address:" << (void*) vtable[0]  << std::endl;
    std::cout << "display address: " << (void*) vtable[1]  << std::endl;

    std::cout << "------------------------------------------------" << std::endl;


    std::cout << "A size:" << sizeof(A) << std::endl; // 1
    std::cout << "B size:" << sizeof(B) << std::endl; // 1
    std::cout << "C size:" << sizeof(C) << std::endl; // 1
    std::cout << "C1 size:" << sizeof(C1) << std::endl; // 4
    std::cout << "D size:" << sizeof(D) << std::endl; // 16
    std::cout << "E size:" << sizeof(E) << std::endl; // 24
    std::cout << "F size:" << sizeof(F) << std::endl; // 22


    F1 f1;
    std::cout << "f1 address:" << (void*)&f1 << std::endl; // 16
    std::cout << "a: " <<(void*) &f1.a << std::endl; 
    std::cout << "b: " <<(void*) &f1.b << std::endl; 
    std::cout << "c: " <<(void*) &f1.c << std::endl; 
    std::cout << "d: " <<(void*) &f1.d << std::endl; 

    return 0;
}
