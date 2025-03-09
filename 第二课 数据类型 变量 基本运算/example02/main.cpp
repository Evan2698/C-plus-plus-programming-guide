#include <iostream>
#include <cmath>

void arithmetic_op(){
int i = 0;
int c = i++;
//i = 1 | c=0
std::cout << "i = " << i << " | c=" << c << std::endl;
int d = ++i;

//i = 2 | d=2
std::cout << "i = " << i << " | d=" << d << std::endl;

float f = 23.0f;
float g = 3.0f;
long int h = f / g;   //h = 7 
float j = f / g;      //j=7.66667
int test1 = 5;
int test2 = 3;
float test3 =(float)test1 / test2; 
float test4 = test1 / test2; //test4=1

std::cout << "h = " << h << " | j=" << j  << " test3=" << test3  << " test4=" << test4 << std::endl;

int k = 5;
int l = k % 2; //l=1

std::cout << "l = " << l << std::endl;

int m = 500;
int n = 63;
double o = m / n; //o=7  
double p = static_cast<double>(m) / (double)n;
std::cout << "o = " << o << " | p=" << p << std::endl;  //p=7.93651

}

void relational_op(){
    register int q = 0;
    int *r = &q;    

    int a = 5, b = 10; 
    std::cout << (a > b) << std::endl;  // 输出：0（false）
    std::cout << (a < b) << std::endl;  // 输出：1（true）
    std::cout << (a >= b) << std::endl; // 输出：0（false）
    std::cout << (a <= b) << std::endl; // 输出：1（true）
    std::cout << (a == b) << std::endl; // 输出：0（false）
    std::cout << (a != b) << std::endl; // 输出：1（true）
}

void logical_op(){
      int a = 5, b = 0;
 
    // 逻辑与
    if (a > 0 && b > 0) {
        std::cout << "Both a and b are positive.\n";
    } else {
        std::cout << "Either a or b (or both) are not positive.\n";
    }
 
    // 逻辑或
    if (a > 0 || b > 0) {
        std::cout << "At least one of a or b is positive.\n";
    } else {
        std::cout << "Both a and b are not positive.\n";
    }
 
    // 逻辑非
    if (!b) {
        std::cout << "b is zero or false.\n";
    } else {
        std::cout << "b is positive and true.\n";
    }
}

void bitwise_op(){
    unsigned int a = 5;  // 二进制: 0000 0101
    unsigned int b = 3;  // 二进制: 0000 0011
 
    // 按位与
    unsigned int and_result = a & b;  // 结果: 0000 0001 (即 1)
    std::cout << "a & b = " << and_result << std::endl;
 
    // 按位或
    unsigned int or_result = a | b;   // 结果: 0000 0111 (即 7)
    std::cout << "a | b = " << or_result << std::endl;
 
    // 按位异或
    unsigned int xor_result = a ^ b;  // 结果: 0000 0110 (即 6)
    std::cout << "a ^ b = " << xor_result << std::endl;
 
    // 按位取反
    unsigned int not_result = ~a;     // 结果: 1111 1010 (对于8位二进制表示，实际结果取决于int的位数)
    // 注意：这里的结果是一个很大的数，因为~操作是对所有位取反，包括符号位（如果考虑有符号数的话）
    // 对于无符号数，我们可以简单地看作是对二进制数的逐位取反(4294967290)
    std::cout << "~a = " << not_result << std::endl;
 
    // 左移
    unsigned int left_shift_result = a << 1;  // 结果: 0000 1010 (即 10)
    std::cout << "a << 1 = " << left_shift_result << std::endl;
 
    // 右移
    unsigned int right_shift_result = a >> 1; // 结果: 0000 0010 (即 2)
    std::cout << "a >> 1 = " << right_shift_result << std::endl;

    unsigned int x = 5;
    unsigned int c = (b + 1, x+=1, a=6);       // c = 6
    std::cout << "c = " << c << std::endl;
}



// double calculateArea(double a, double b, double c) {
//     // 计算半周长
//     double s = (a + b + c) / 2;
 
//     // 计算面积
//     double area = sqrt(s * (s - a) * (s - b) * (s - c));
 
//     // 检查三边是否能构成三角形（根据三角形不等式）
//     if (a + b > c && a + c > b && b + c > a) {
//         return area;
//     } else {
//         return -1; // 返回-1表示不能构成三角形
//     }
// }


int main() {
    // arithmetic operations
    arithmetic_op();

    // relational operations
    relational_op();

    // logical operations
    logical_op();

    // bitwise operations
    bitwise_op();


    std::cout << "Hello, World!" << std::endl;
    return 0;
}