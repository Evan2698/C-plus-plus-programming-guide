#include <iostream>

class Test {
public:
    //Test()= delete;
    int value;
};

int main() {
    Test t1; // Default constructor
    t1.value = 10;

    return 0;
}