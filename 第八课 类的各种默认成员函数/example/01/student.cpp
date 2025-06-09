#include "student.h"
#include <iostream>


// Student::Student() {

//   std::cout << "Student constructor called" << std::endl;   

// }

// Student::~Student() {
//     std::cout << "Student destructor called" << std::endl;
// }   

Student::Student(const Student& other) {
    std::cout << "Student copy constructor called" << std::endl;
    name = other.name;
}

Student& Student::operator=(const Student& other) {
    std::cout << "Student copy assignment called" << std::endl;
    name = other.name;
    return *this;
}

Student::Student(Student&& other) {
    std::cout << "Student move constructor called" << std::endl;
    name = std::move(other.name);
}

Student &Student::operator=(Student&& other) {
    std::cout << "Student move assignment called" << std::endl;
    name = std::move(other.name);
    return *this;
}   

Student* Student::operator&() {
    std::cout << "Student operator& called" << std::endl;
    return this;
}

const Student* Student::operator&() const {
    std::cout << "Student operator& const called" << std::endl;
    return this;
}


void Student::set_name(const std::string& name) {
    this->name = name;
}   

std::string Student::get_name() const {
    return name;
}   