#ifndef STUDENT_H
#define STUDENT_H

#include "user.h"

class Student : public User // derived student class inherits from User base class
{
private:
    std::string m_name;
    const std::string m_classes[5] = {"CDA 3104", "CDA 3200", "COP 3003", "CEN 3031", "EGS 3045C"};

public:
    // default student contructor
    Student();

    // properties constructor (overloaded)
    Student(std::string name);


    // getters and setters
    std::string get_name();
    void set_name(std::string name);



    // member methods


};

#endif // STUDENT_H
