#include <iostream>
#include <string>

struct Car {

    std::string name_;
    std::string color_;
    int year_;


public:
    Car(std::string name, std::string color, int year):
    name_(name), 
    color_(color), 
    year_(year) {
        std::cout << "Car constructor for " << this->name_ << std::endl;  
    }
    ~Car() {
        std::cout << name_ << " Car destructor" << std::endl;
    }

    void Drive() {
        std::cout << name_ <<" is driving" << std::endl;
    }

    void Stop() {
        std::cout << name_ << " is stopped" << std::endl;
    }

    int Age() {
        return 2025- year_;
    }

    std::string Color() {
        return color_;
    }

    std::string Brand() {
        return name_;
    }

protected:

   void ChangeEngine() {
       std::cout << "Engine is changed" << std::endl;
   }

//private:
    // std::string name_;
    // std::string color_;
    // int year_;

};

struct ship {
    std::string name;
    std::string color;
};  

void * build_ship(std::string name,  std::string color);
void destroy_ship(void * handle);
std::string get_ship_name(void * handle);
std::string get_ship_color(void *handle);

int main() {
    Car car("Tesla", "White", 2023);
    std::cout << "start main--->" << std::endl;
    car.Drive();
    std::cout << "Car age: " << car.Age() << std::endl;
    std::cout << "Car color: " << car.Color() << std::endl;
    std::cout << "Car brand: " << car.Brand() << std::endl;
    car.name_ = "BYD";

    Car *pCar = new Car("BMW", "Black", 2022);
    pCar->Drive();
    delete pCar;

    // C language style
    void * handle = build_ship("Titanic", "Black");
    std::cout << "Ship name: " << get_ship_name(handle) << std::endl;
    std::cout << "Ship color: " << get_ship_color(handle) << std::endl;
    destroy_ship(handle);

    std::cout << "exit main--->" << std::endl;
    return 0;
}

void * build_ship(std::string name,  std::string color){
    ship * s = new ship;
    s->name = name;
    s->color = color;
    return s;
}

void destroy_ship(void * handle){
    if (handle == nullptr) {
        return;
    }
    ship * s = reinterpret_cast<ship *>(handle);
    delete s;
    s = nullptr;
}

std::string get_ship_name(void * handle){
    if (handle == nullptr) {
        return "";
    }
    ship * s = reinterpret_cast<ship *>(handle);
    return s->name;
}

std::string get_ship_color(void *handle){
    if (handle == nullptr) {
        return "";
    }
    ship * s = reinterpret_cast<ship *>(handle);
    return s->color;
}


// 1. 默认构造函数（Default Constructor）：
// 如果类没有定义构造函数，编译器会生成一个默认构造函数。它会初始化所有成员变量（如果成员变量有默认构造函数）。

// 2. 拷贝构造函数（Copy Constructor）：
// 如果类没有定义拷贝构造函数，编译器会生成一个拷贝构造函数。该构造函数会按成员进行逐个拷贝。

// 3. 拷贝赋值运算符（Copy Assignment Operator）：
// 如果类没有定义拷贝赋值运算符，编译器会生成一个拷贝赋值运算符。它会为类的每个成员进行逐个拷贝赋值。

// 4. 移动构造函数（Move Constructor）：
// 如果类没有定义移动构造函数，编译器会生成一个移动构造函数（C++11及以后）。这个函数可以通过转移资源而不是拷贝来构造对象。

// 5. 移动赋值运算符（Move Assignment Operator）：
// 如果类没有定义移动赋值运算符，编译器会生成一个移动赋值运算符（C++11及以后）。它通过转移资源来给对象赋值。

// 6. 析构函数（Destructor）：
// 如果类没有定义析构函数，编译器会生成一个默认的析构函数。它负责释放类的成员资源。

// 7. 取地址运算符（Address-of Operator）：

// 8. const 取地址运算符（Const Address-of Operator）：



