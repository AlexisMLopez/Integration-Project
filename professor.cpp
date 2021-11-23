#include "professor.h"

//default Professor Constructor
Professor::Professor()
{
    
}



// non-trivial methods
void Professor::user_type() {
    std::cout << "This user is a professor!" << std::endl;
}

// use of iterators on aggregates, using the advance increment to icrement the iterator.
void Professor::view_grades(Student student) {                                             // Unique view_grades method to Professor class
    std::cout << "You are viewing grades as a Professor" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << student.student_grades[i] << " ";
       
    }
    std::cout << std::endl;
}

// use of iterators on aggregates, using the advance increment to icrement the iterator.
void Professor::set_grades(Student &student) {                                              // passing student object by reference to modify values in student_grades vector in Student class
    std::cout << "Please enter the student's grades: [5]" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cin >> student.student_grades[i];
     
    }
}

void Professor::calculate_GPA() {

}



