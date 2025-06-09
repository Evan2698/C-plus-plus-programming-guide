#include <iostream>
using namespace std;

// 1. 重载，在同一个类里面也是一样的
void print(int a)
{
    cout << "打印一个整数: " << a << endl;
}

void print(int a, int b)
{
    cout << "打印两个整数: " << a << " 和 " << b << endl;
}

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    double add(double a, double b)
    {
        return a + b;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
    }
};

// 2. 重写
class Animal
{
public:
    virtual void makeSound()
    {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal
{
public:
    virtual void makeSound() override
    { // 重写基类的虚函数
        cout << "Bark" << endl;
    }
};

// 3. 重定义

class Base
{
public:
    void func()
    {
        cout << "Base::func()" << endl;
    }

    void func(int a)
    {
        cout << "Base::func(int)" << endl;
    }

    void print(){
        cout << "Base::print" << endl;
    }
};

class Derived : public Base
{
public:
    using Base::func;
    void func()
    { // 隐藏了Base中的所有func函数
        cout << "Derived::func()" << endl;
    }
};

int main()
{

    print(3);
    print(3, 4);



    Derived d;
    d.func();      // 调用Derived::func()
    d.func(1);  // 错误：Base::func(int)被隐藏
    d.print();
    //d.Base::func(1); // 正确：显式调用基类函数

    d.Base::func();

    return 0;
}