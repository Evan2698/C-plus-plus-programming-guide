#include <iostream>
#include "student.h"
#include <vector>



Student create_student() {
    Student s;
    s.set_name("John");
    return s;
}




int main() {

    // 1. Default constructor   
    //Student s;
    //s.set_name("Alice");

    // 2. Copy constructor
    //Student s2(s);

    // 3. Copy assignment
    //Student s3;
    //s3 = s;

    // 4. Move constructor
    std::vector<Student> students;
    students.push_back(create_student()); // call move constructor implicitly

    // Student ss(std::move(s)); // call move constructor explicitly
    // auto name = s.get_name();
    // std::cout <<"moved: " << name << std::endl;

    
   

    // 5. Move assignment
   // Student s5;
    //s5 = std::move(s2);

    // call move assignment implicitly
    // Student s5;
    // s5 = create_student();

    // 6. Operator &
    //Student* ps6 = &s3;

    // 7. Operator & const
    //const Student s7;
    //const Student* ps8 = &s7;



    std::cout << "Hello, World!" << std::endl;
    return 0;
}