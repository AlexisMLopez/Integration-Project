// User class definition 
#include "user.h"


// default constructor
User::User()
{
	m_idnum = "Uknown";
	m_name = "Null";
}

//LO1c.Utilize an initialization list
User::User(std::string idnum) : m_idnum(idnum) {
	//m_idnum = idnum;
}

// getters and setters
std::string User::get_idnum() { return m_idnum; }
void User::set_idnum(std::string idnum) { m_idnum = idnum; }

std::string User::get_name() { return m_name; }
void User::set_name(std::string name) { m_name = name; }


// member methods
void User::user_type() {}									//LO3. Correctly reason about control flow in a program using dynamic dispatch. 


