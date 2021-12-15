// user class implementation
#ifndef USER_H 
#define USER_H

#include <iostream>
#include <string>
#include <vector>
#include "course.h"

class User : public Course {
    //private fields
private:
    std::string m_idnum;
    std::string m_name;

public:

    // default constructor
    User();

    // properties constructor
    User(std::string idnum);

    // getters and setters
    std::string get_idnum();
    void set_idnum(std::string idnum);

    std::string get_name();
    void set_name(std::string name);

    // member methods
    virtual void user_type();           // pure virtual function header makes it so the view_grades function in the User class is overriden and instead executes the subclass versions of view_grades()  
                                            // Enables us to achieve dynamic dispatch which allows us to select which implementation of a polymorphic function that we want at runtime 
};



#endif // USER_H
