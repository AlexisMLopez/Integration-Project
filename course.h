// course class implementation
#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <array>

class Course
{
private:
    const std::string m_class = "COP 3003";             //constant course that cannot be reassigned

public:
    const std::string assignments[4] = { "Quiz", "Exam", "Homework", "Project" };

    Course();

    // member methods
   
};

#endif // COURSE_H
