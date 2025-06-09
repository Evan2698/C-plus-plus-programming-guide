#include <iostream>
#include <string>


// int add (int a , int b) {
//     return a + b;
// }

// double add(double a, double b) {
//     return a +b;
// }


template <typename T> 
T add (T a, T b ) {
    return a + b;
}

template <> 
std::string add (std::string a, std::string b){
    return a + " " + b;
}



// 模板函数定义
template <typename T, int N>
void printArray(const T (&arr)[N]) {
    std::cout << "Array elements: ";
    for (int i = 0; i < N; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\nArray size: " << N << std::endl;
}

int main() {

    int cc = add(1, 1);
    double d = add(34.0, 44.0); //double (const被丢弃)
    double h = add<double>(44, 444.0);
    double &f = d;
    double g = add(f, f);   // 引用被丢了


    // 显式实例化
    int intArray[5] = {1, 2, 3, 4, 5};
    printArray<int, 5>(intArray);

    // 隐式实例化
    std::string strArray[3] = {"Hello", "Template", "Function"};
    printArray(strArray);


    // 特化
    std::string result = add(std::string("hello"), std::string("world"));

    std::cout <<  result << std::endl;



    return 0;
}