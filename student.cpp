// student class definition
#include "student.h"
// default constructor
Student::Student()
{
    gpa = 0;
    
}

// properties constructor that is overloaded
/*
Student::Student(std::string name)
{
    //m_name = name;
}
*/
// getters and setters


// member methods

void Student::view_grades() {                                               //view_grades method for Student class
    std::cout << "You are viewing your grades as a Student" << std::endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
		{
			std::cout << student_grades[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void Student::user_type() {
    std::cout << "This user is a student!" << std::endl;
}


