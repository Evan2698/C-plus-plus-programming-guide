#include <iostream>



int main() {

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
// 可以不用形参
double divide(int, int);

void swap(int a, int b);
void swapwithpointer(int *a, int *b);
void swapwithreference(int &a, int &b);

    int x = 10;
    int y = 5;

    std::cout << "Add: " << add(x, y) << std::endl;
    std::cout << "Subtract: " << subtract(x, y) << std::endl;
    std::cout << "Multiply: " << multiply(x, y) << std::endl;
    std::cout << "Divide: " << divide(x, y) << std::endl;

    swap(x, y); 
    std::cout << "Outside swap function: x = " << x << ", y = " << y << std::endl;
    //swapwithpointer(&x, &y);
    swapwithreference(x, y);
    std::cout << "Outside swap function 1: x = " << x << ", y = " << y << std::endl;

    return 0;
}

void swapwithpointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    std::cout << "Inside swap function: a = " << *a << ", b = " << *b << std::endl;
}

void swapwithreference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    std::cout << "Inside swap function: a = " << a << ", b = " << b << std::endl;
}


void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    std::cout << "Inside swap function: a = " << a << ", b = " << b << std::endl;
}

// 函数定义：计算两个整数的和
int add(int a, int b) {
    return a + b;
}

// 函数定义：计算两个整数的差
int subtract(int a, int b) {
    return a - b;
}

// 函数定义：计算两个整数的积
int multiply(int a, int b) {
    return a * b;
}

// 函数定义：计算两个整数的商
double divide(int a, int b) {
    if (b == 0) {
        std::cerr << "Error: Division by zero!" << std::endl;
        return 0;
    }
    return static_cast<double>(a) / b;
}
