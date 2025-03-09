#include <iostream>


void dummy() {
    std::cout << "dummy" << std::endl;
}


void define_pointer() {

    // sample for int pointer
    int *p;
    int a = 10;
    p = &a;
    std::cout << "p = " << p << std::endl;
    std::cout << "*p = " << *p << std::endl;

    int **q = &p;
    std::cout << "q = " << q << std::endl;  
    std::cout << "*q = " << *q << std::endl;
    std::cout << "a = " << **q << std::endl;

    // sample for array pointer
    int arr[5] = {1, 2, 3, 4, 5};   
    int *r = arr;
    for (size_t i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        std::cout << "r[" << i << "] = " << *(r + i) << std::endl;
    }
    std::cout << "r = " << r << std::endl;

    // sample for two-dimensional array pointer
    int arr2d[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int (*s)[3] = arr2d;
    for (size_t i = 0; i < sizeof(arr2d)/sizeof(arr2d[0]); i++)
    {
        for (size_t j = 0; j < sizeof(arr2d[0])/sizeof(arr2d[0][0]); j++)
        {
            std::cout << "s[" << i << "][" << j << "] = " << *(*(s + i) + j) << std::endl;
        }
    }

    // sample for pointer array 
    int *t[3];  
    int a1 = 1, a2 = 2, a3 = 3;
    t[0] = &a1; 
    t[1] = &a2;
    t[2] = &a3;
    for (size_t i = 0; i < sizeof(t)/sizeof(t[0]); i++)
    {
        std::cout << "t[" << i << "] = " << *t[i] << std::endl;
    }
    // sample for point to function
    void (*f)() = dummy;
    f();        // call function
    std::cout << "called by pointer " << std::endl;
}

void  other_pointer() {
    int *p = nullptr; // NULL 或者 0 也可以表示空指针

    void *q = nullptr; // 通用指针，可以指向任何类型的指针
    char r[]= "hello";
    q = r;
    std::cout << "q = " << reinterpret_cast<char*>(q)<< std::endl;

    const char *s = "world";
    //*s = 'A'; // error, s is a pointer to const char
    s = "new world"; // ok, s is a pointer, can be assigned to another address
    const char * const t = "new world";
    //t = "world"; // error, t is a const pointer
    // *t = 'A'; // error, t is a pointer to const char

    char v[] = "hello";
    char * const u = v;
    //u = "world"; // error, u is a const pointer
    *u = 'A'; // ok, u is a const pointer to char
    std::cout << "u = " << u << std::endl;
}

void reference_op() {
    int a = 10;
    int &b = a;
    std::cout << "a = " << b << std::endl;

    const int &c = 2;
    std::cout << "c = " << c << std::endl;

   //int &d = 2;// error, 2 is a const value

   int *p = nullptr;
   int &d = *p;  // error, d is a reference, must not be null
  //std::cout << "d= " << d << std::endl;
}


int main() {
    define_pointer();
    other_pointer();
    reference_op();
    return 0;
}