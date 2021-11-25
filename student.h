// student class implementation
#ifndef STUDENT_H
#define STUDENT_H

#include "user.h"

class Student : public User // derived student class inherits from User base class
{
private:
    double gpa;

public:
    //std::vector<double> student_grades = { 0,0,0,0,0 };                     
    double student_grades[3][3] = { {0,0,0},{0,0,0},{0,0,0} };       // 2D Array for storing the course grades of a student

    // default student contructor
    Student();

    // properties constructor (overloaded)
    //Student(std::string name);


    // getters and setters


    // member methods
    
    void view_grades();
    void user_type();
};

#endif // STUDENT_H
