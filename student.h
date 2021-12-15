// student class implementation 
#ifndef STUDENT_H
#define STUDENT_H

#include "user.h"
#include <vector>

class Student : public User												//LO2.Use subclassing to design simple class hierarchies that allow code to be reused for distinct subclasses.
{
private:
	double final_grade;

public:
	std::vector<double> student_grades = { 0,0,0,0 };                     // vector for storing the course grades of a student

	// default student contructor
	Student();



	// member methods
	void view_grades();
	void user_type();

};

#endif // STUDENT_H
