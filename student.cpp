// student class definition
#include "student.h"
// default constructor
Student::Student()
{
    final_grade = 0;
    
}


// member methods
void Student::view_grades() {                                               //view_grades method for Student class
    std::cout << "You are viewing your grades as a Student" << std::endl;
    for (int i = 0; i < student_grades.size(); i++) {
        std::cout << student_grades.at(i) << " ";
    }
	std::cout << std::endl;
}

void Student::user_type() {
    std::cout << "This user is a student!" << std::endl;
    std::cout << std::endl;
}

