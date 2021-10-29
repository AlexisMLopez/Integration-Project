#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "user.h"

class Professor : public User
{
private:


public:
    Professor();


    // member methods
    void calculate_GPA();
};

#endif // PROFESSOR_H
