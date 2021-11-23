#ifndef STUDENT_H
#define STUDENT_H

#include "user.h"

class Student : public User // derived student class inherits from User base class
{
private:
    std::string m_name;
   

public:
    std::vector<double> student_grades = { 0,0,0,0,0 };

    // default student contructor
    Student();

    // properties constructor (overloaded)
    Student(std::string name);


    // getters and setters
    std::string get_name();
    void set_name(std::string name);


    // member methods
    void view_grades();
    void user_type();
};

#endif // STUDENT_H
