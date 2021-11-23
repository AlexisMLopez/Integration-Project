// student class definition
#include "student.h"


// default constructor
Student::Student()
{
    m_name = "Null"; 
}

// properties constructor that is overloaded
Student::Student(std::string name)
{
    m_name = name;
}

// getters and setters
std::string Student::get_name() { return m_name; }
void Student::set_name(std::string name) { m_name = name; }

// member methods
void Student::view_grades() {                                               // Unique view_grades method to Student class
    std::cout << "You are viewing your grades as a Student" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << student_grades[i] << " ";
    }
    std::cout << std::endl;
}

void Student::user_type() {
    std::cout << "This user is a student!" << std::endl;
}


