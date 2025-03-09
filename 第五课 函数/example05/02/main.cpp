#include <iostream>

int functionA(int a, int b, int q ) {

    int c = a + b;
    return c;
}

int functionB(char a ) {
    int c = 5;
    int d = 6;
    int f = a;
    int e = functionA(c, d, f);
    return e;
}


void function_life() {
    int a = 5;
    std::cout <<"a(0)=" << a << std::endl;
    {
        int a = 6;
        std::cout <<"a(1)=" << a << std::endl;
        {
            int a = 7;
            std::cout <<"a(2)=" << a << std::endl;
        }
        std::cout <<"a(1)=" << a << std::endl;
    }
    std::cout <<"a(0)=" << a << std::endl;
}

// 函数实参是值传递，形参是局部变量
// 函数调用时，实参的值会被复制到形参中
// 函数调用结束后，形参的值会被销毁
// 函数调用时，实参的值不会被改变
// 函数调用时，实参的值不会影响形参的值
// 函数调用时，实参的值不会影响其他实参的值
// 函数调用时，实参的值不会影响其他函数的局部变量的值
// 函数调用时，实参的值不会影响其他函数的形参的值

void parameter_passing(int a, int b) 
{
    
    a = 10;
    b = 20;
    std::cout << "a=" << a << std::endl;
    std::cout << "b=" << b << std::endl;
}

void parameter_passing2(int *x, int* y) {
    int a = *x;
    *x = *y;
    *y = a; 
    std::cout << "*x=" << *x << std::endl;
    std::cout << "*y=" <<*y << std::endl;
}

  

int main() {
    functionB('a');
    function_life();
    int a = 5;
    int b = 6;
    parameter_passing(a, b);
    std::cout << "a=" << a << std::endl;
    std::cout << "b=" << b << std::endl;
    parameter_passing2(&a, &b);
    std::cout << "a=" << a << std::endl;
    std::cout << "b=" << b << std::endl;
    
    return 0;
}