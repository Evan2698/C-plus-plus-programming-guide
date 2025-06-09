#ifndef STUDENT_H_2025_05_12
#define STUDENT_H_2025_05_12
#include <string>

class Student {
public:
    // Constructor
    Student() = default;
    // Destructor
    ~Student() = default;

    // copy constructor
    Student(const Student& other);

    // copy assignment
    Student& operator=(const Student& other);

    // move constructor
    Student(Student&& other);

    // move assignment
    Student& operator=(Student&& other);

    // operator &
    Student* operator&();

    const Student* operator&() const;

    void set_name(const std::string& name);
    std::string get_name() const;


    static Student & build_unique_student(const std::string& name) {
        static Student s;
        s.set_name(name);
        return s;
    }

   
private:
    std::string  name;   
};  

#endif
