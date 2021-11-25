// professor class definition 
#include "professor.h"

//default Professor Constructor
Professor::Professor() : User()                                                             //call to parent class constructor in order to change fields from child class
{
	total_weight = 0;
}



// non-trivial methods
void Professor::enter_studentname(Student& student) {
	std::cout << "Please enter the student's name" << std::endl;
	std::string name;
	std::cin >> name;
	student.set_name(name);
}

void Professor::user_type() {
	std::cout << "This user is a professor!" << std::endl;
}


// use of iterators on aggregates, using the advance increment to increment the iterator.
void Professor::view_grades(Student student) {                                               // Unique view_grades method to Professor class
	std::cout << "You are viewing " << student.get_name() << " grades as a Professor." << std::endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
		{
			std::cout << student.student_grades[i][j] << " ";
		}
		std::cout << std::endl;
	}
}



// use of iterators on aggregates, using the advance increment to increment the iterator.
void Professor::set_grades(Student& student) {                                              // passing student object by reference to modify values in student_grades 2D array in Student class
	std::cout << "You are entering grades for " << student.get_name() << "." << std::endl;
	//int size = sizeof(student.student_grades);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			std::cin >> student.student_grades[i][j];
		}
	}
}



void Professor::calculate_GPA() {

}



