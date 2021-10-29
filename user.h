// user class implementation
#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
#include "courses.h"

class User : public Courses {
    //private fields
    std::string m_idnum;

public:

    // default constructor
    User();

    // properties constructor
    User(std::string idnum);

    // getters and setters
    std::string get_idnum();
    void set_idnum(std::string idnum);

    // member methods
};



#endif // USER_H
