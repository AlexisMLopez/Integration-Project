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


