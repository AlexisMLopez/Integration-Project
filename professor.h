// professor class implementation
#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "user.h"
#include "student.h"

class Professor : public User
{
private:
    

public:

    //default constructor
    Professor();


    // member methods
    void user_type();
    void view_grades(Student student);     
    void set_grades(Student &student);
    void calculate_GPA();
};

#endif // PROFESSOR_H
