#include <iostream>

void memory_allocation_sample() {
    int *p = new int;
    *p = 5;
    std::cout << *p << std::endl;
    delete p;
    p = nullptr;

    int *arr = new int[5];  
    for (int i = 0; i < 5; i++) {
        arr[i] = i;
    }

    for (int i = 0; i < 5; i++) {
        std::cout << "arr[" << i << "]="  << arr[i] << std::endl;
    }    
    delete[] arr;
    arr = nullptr;


    // memory leaks
    int *p1 = new int;
        *p1 = 5;  
        delete p1;
              
    p1 = new int;
        *p1 = 6;
    delete p1;
    
}



int main() {
    memory_allocation_sample();
    return 0;
}