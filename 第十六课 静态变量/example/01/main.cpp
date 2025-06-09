#include <iostream>

using namespace std;

// 全局静态变量
static int globalStaticVar = 10;

void demonstrateFunctionStatic() {
    // 函数内部静态变量
    static int functionStaticVar = 0;
    functionStaticVar++;
    int c = 12;
    cout << "Function static variable value: " << functionStaticVar << endl;
}

class MyClass {
public:
    // 类的静态成员变量
    static int classStaticVar;

    void incrementStaticVar() {
        classStaticVar++;
    }

    void displayStaticVar() const {
        cout << "Class static variable value: " << classStaticVar << endl;
    }
};

// 类静态成员变量定义和初始化
int MyClass::classStaticVar = 0;

// 设计模式里面的单例模式
MyClass& getInstance() {
    static MyClass instance; // 局部静态变量
    return instance;
}

int main() {
    cout << "Global static variable value: " << globalStaticVar << endl;

    // 调用函数，观察函数内部静态变量的行为
    demonstrateFunctionStatic();
    demonstrateFunctionStatic();

    // 使用类的静态成员变量
    MyClass obj1, obj2;
    std::cout << "size=" <<  sizeof(obj1) << std::endl;
    obj1.incrementStaticVar();
    obj2.incrementStaticVar();
    obj1.displayStaticVar();
    obj2.displayStaticVar();

    return 0;
}

