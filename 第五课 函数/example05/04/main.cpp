#include <iostream>
using namespace std;

int F(int n) {
   if (n >=0){
    if (n == 0) {
        //std::cout <<  "0-->" <<   0  <<  std::endl;
        return 0;
    } else if (n == 1) {
        //std::cout <<  "1-->" <<   1  <<  std::endl;
        return 1;
    } else {

        int v = F(n-1) + F(n-2);
         //std::cout << n << "-->" <<   v  <<  std::endl;
        return v;
    }

   } else {
    std::cout << "Error" << std::endl;
    return 0;
   }
}
int F2(int n) {
    if (n<=0) return 0;
    if (n==1) return 1;
    return F2(n-1) + F2(n-2);   
}
void generateFibonacci(int n) {
    for (int i = 0; i < n; i++) {
        std::cout << F2(i) << " ";
    }
    std::cout << std::endl;
}

// 5! = 5 * 4 * 3 * 2 * 1 = 120
//4! = 4 * 3 * 2 * 1 = 24
// 0! = 1
// 1! = 1

// f(n) =n * f(n-1)
// f(0) = 1
// f(1) = 1



//阶层计算
int factorial(int n) {
    if (n < 0) {
        std::cout << "Error" << std::endl;
        return 0;
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {

    //std::cin.rdbuf()
    std::istream input; 
    int kk;
    input >> kk;
    std::cout << kk << std::endl;
    int n;
    cout << "Enter the number of Fibonacci numbers to generate: ";
    cin >> n;
    generateFibonacci(n);
    return 0;
}