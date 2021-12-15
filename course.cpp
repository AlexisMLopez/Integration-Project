// course class definition 
#include "course.h"


Course::Course()
{
	m_course = "No course entered";
}

Course::Course(std::string course_name) {						//LO1b. Overload a constructor 
	m_course = course_name;
}

void Course::print_assignments() {
	std::cout << "Grades are placed in the following format: " << std::endl;
	for (int i = 0; i < 4; i++) {
		std::cout << "[" << assignments[i] << "]" << " ";
	}
	std::cout << std::endl;
}

void Course::print_course() {

	std::cout << "For the course: " << m_course << std::endl;
}