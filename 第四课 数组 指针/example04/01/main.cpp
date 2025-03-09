#include <iostream>
#include <cstring>

// int dd = 90;
// int ss[dd] = {0};  //error: size of array ‘ss’ is not an integral constant-expression
//

int ss[100];


void linear_array(void) {
    // 固定长度数组
    int fixed_array0[5] = {1, 2, 3, 4, 5};
    std::cout << "Fixed length array(0): ";
    for (int i = 0; i < 5; ++i) {
        std::cout << fixed_array0[i] << " ";
    }
    std::cout << std::endl;
    
    int fixed_array1[] = {1, 2, 3, 4, 5};
    std::cout << "Fixed length array(1): ";
    for (int i = 0; i < 5; ++i) {
        std::cout << fixed_array1[i] << " ";
    }
    std::cout << std::endl;
    int fixed_array3[5] = {1, 2};
    for (int i = 0; i < sizeof(fixed_array3) / sizeof(fixed_array3[0]); ++i) {
        std::cout << fixed_array3[i] << " ";
    }
    std::cout << std::endl;

    int nvariable = 5;
    int mvariable = 6;
    int variable_array2[nvariable + mvariable] = {1, 2, 3, 4, 5, 6, 7,8,9,10,11,         12,23}; // 有可能在编译时报错， 或者溢出
    std::cout << "Variable length array(2): ";
    for (int i = 0; i < nvariable + mvariable +2; ++i) {
        std::cout << variable_array2[i] << " ";
    }
    std::cout << std::endl;


    //每个元素都进行平方
    int sum = 0;
    std::cout << "Fixed length array(2): ";
    for (int i = 0; i < nvariable + mvariable; ++i) {
        //variable_array2[i] = variable_array2[i] * variable_array2[i];
        //std::cout << variable_array2[i] << " ";
        sum += variable_array2[i];
    }

    std::cout << "sum: " << sum << std::endl;
    std::cout << "average: " << sum / (nvariable + mvariable) << std::endl;

    std::cout << std::endl;    

}

// sort 
void sort_array(int *array, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

// 二维数组 
void two_dimension_array(void) {
    int array[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    std::cout << "Two dimension array: " << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j= 0; j < 4; ++j) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "Two dimension array(1): " << std::endl;
    int b[3][4]={1,2,3,4,5};
    for (int i = 0; i < 3; ++i) {
        for (int j= 0; j < 4; ++j) {
            std::cout << b[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void three_dimension_array(void) {
    int array3D[3][3][3] = {
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        },
        {
            {10, 11, 12},
            {13, 14, 15},
            {16, 17, 18}
        },
        {
            {19, 20, 21},
            {22, 23, 24},
            {25, 26, 27}
        }
    };
 
    // 遍历并打印三维数组的元素
    std::cout << "3D Array elements:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 3; ++k) {
                std::cout << array3D[i][j][k] << " ";
            }
            std::cout << std::endl; // 换行，以便更好地查看二维层面的元素
        }
        std::cout << std::endl; // 每遍历完一个二维层面后换行
    }
}
//'\0'  0
// 字符串数组
void string_array(void) {
    char a[5] = {'h', 'e', 'l', 'l', 'o'};
    char b[6] = "World";
    char c[] = "Hello, World!";
    char d[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    d[6] = 0;
    //char e[5] = "Hello";  // 编译器会报错，因为字符串长度超过了数组长度
    std::string strhello = "hello";

    std::cout << "String array: " << std::endl;
    std::cout << "a: " << a << std::endl; // 输出字符串有问题，因为字符串数组不能直接输出

    std::cout << "b: " << b << std::endl;   // OK 
    std::cout << "c: " << c << std::endl;   // OK
    std::cout << "d: " << d << std::endl;   // OK

    char a1[20] = "Hello";
    char a2[20] = "World";
    strlcat(a1, a2, sizeof(a1));
    std::cout << "strlcat: " << a1 << std::endl;
   
    std::cout << "strlen: " <<  strlen(a1) << std::endl;
    if (strcmp(a1, a2) == 0) {
        std::cout << "a1 and a2 are equal." << std::endl;
    } else {
        std::cout << "a1 and a2 are not equal." << std::endl;
    } 
}


int main() {

    // 一维数组
    linear_array();


    int array[] = {3, 2, 1, 4, 5};
    int n = sizeof(array) / sizeof(array[0]);
    sort_array(array, n);
    std::cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    //--------------------------------
    // 二维数组
    two_dimension_array();

    // 三维数组
    three_dimension_array();

    // 字符串数组
    string_array();

    return 0;
}