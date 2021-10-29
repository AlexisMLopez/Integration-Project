#include "courses.h"

Courses::Courses()
{

}

// non-trivial method
void Courses::get_grades() {
    for(int i = 0; i < 5; i++) {
        std::cout << m_grades[i] << std::endl;
    }
};

// non-trivial method
void Courses::set_grades() {
    std::cout << "Please enter the student's grades: [5]" << std::endl;

    for(int i = 0; i < 5; i++) {
        std::cin >> m_grades[i];
    }
}
