// User class definition
#include "user.h"


        // initializing values into static grade array 

// default constructor
User::User() 
{
    m_idnum = "Uknown";
    m_name = "Null";
}

// overloaded properties constructor using list initialization
User::User(std::string idnum) : m_idnum(idnum) {
    //m_idnum = idnum;
}

// getters and setters
std::string User::get_idnum() { return m_idnum; }
void User::set_idnum(std::string idnum) { m_idnum = idnum; }

std::string User::get_name() { return m_name; }
void User::set_name(std::string name) { m_name = name; }


// member methods
void User::user_type() {}


