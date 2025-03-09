#include <iostream>

// Function to add two integers
int add(int a, int b) {
    return a + b;
}
// Function to add two doubles
double add(double a, double b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

// default parameter values for function overloading
// Function to add two integers 
int add(int a, int b, int c, int d, int e = 0) {
    return a + b + c +d + e;
}

inline char add(char a, int offset) {
    return a + static_cast<char>(offset);
}

int main() {
    std::cout << "Add two integers: " << add(1, 2) << std::endl;
    std::cout << "Add two doubles: " << add(1.5, 2.5) << std::endl;
    std::cout << "Add three integers: " << add(1, 2, 3) << std::endl;
    std::cout << "Add four integers: " << add(1, 2, 3, 4) << std::endl;
    std::cout << "Add five integers: " << add(1, 2, 3, 4, 5) << std::endl;
    std::cout << "Add two characters: " << add('a', 4) << std::endl;
    return 0;
}