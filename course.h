// course class implementation 
#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <vector>
#include <string>

class Course
{
private:
    std::string m_course;                                                  //course that can be reassigned

public:
    const std::string assignments[4] = { "Quiz", "Exam", "Homework", "Project" };       //constant assignments array that contains assignments whose contents cannot be modified
    //std::vector<Professor> professor_list;
    //std::vector<Student> student_list;

    Course();

    Course(std::string course_name);                                                    //overloaded properties constructor

    // member methods
    void print_assignments();
    void print_course();
   
};

#endif // COURSE_H
