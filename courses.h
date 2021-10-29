#ifndef COURSES_H
#define COURSES_H

#include <iostream>

class Courses
{
private:
    int m_grades[5] = {0, 0, 0, 0, 0};

public:
    Courses();

    // member methods
    void get_grades();
    void set_grades();
};

#endif // COURSES_H
