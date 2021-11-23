#include <iostream>
#include "student.h"
#include "professor.h"

/* OOP vs Procedural/Functional:
 * Object oriented programming is based all around objects while Procedural is based around functions.
 * OOP has the advantage of having access to Polymorphism, Inheritance, and Encapsulation, which procedural does not.
 * OOP is better suited to mid to large scale coding projects whilst Procedural can be done at the very small scale
 * OOP is based entirely on reusing code without having to make drastic changes that occcurs when you edit code in procedural
 * OOP provides information hiding (Encapsulation) so it is safer than using procedural (private info can be used by anyone)
 * OOP makes it possible to overload, whereas it is not possible in procedural
 * Without inheritance, polymorphism is impossible
 * The heart of polymorphism is overridding. (Sub classes will override the methods within the base class)
 * Interface classes: no member variables and all pure virtual functions (all methods = 0)
*/
// Visibility inheritance model: Courses is the base class. User is a derived class that inherits from the Courses base class
// Student and Professor are derived classes that inherit from the User class.

/* Explain the relationship between object - oriented inheritance(code - sharing and overriding) and subtyping(the idea of a subtype being usable in a context that expects the supertype).
*  Subtyping: is a type of polymorphism known as inclusion polymorphism. It is accessing the derived classes through the base classes with pointers and references (virtual functions are an example).
*  OOI: Through subtyping this allows us to override the virtual function that we created which allows us to achieve object oriented inheritance. 
*  Other methods to achieve overriding through object oriented inheritance would include using templates.
*/
int main()
{
    Student student("Alexis Lopez");               // Creation of an object of the Student class using overloaded constructor
    Professor professor;                           // Creation of an object of the Professor class using a default constructor

    // Accessing getters and setters to alter member variables in User class and Student class  
    std::cout << "Please enter you credentials (UIN)" << std::endl;								    
    std::cout << student.get_idnum() << std::endl;                                                
    student.set_idnum("A123456");                   
    std::cout << student.get_idnum() << std::endl;

    std::cout << student.get_name() << std::endl;
    student.set_name("Not Alexis");
    std::cout << student.get_name() << std::endl;

    professor.set_grades(student);                  // non trivial method in Professor class that allows the professor to enter grades into grade Vector in Student class

    //student.view_grades();                                    
    //professor.view_grades(student);                           
  
    // Correctly reason about control flow in a program using dynamic dispatch.
    User* student_type = new Student();
    User* professor_type = new Professor();
    student_type->user_type();                      // example of polymorphism that goes from User class into Student class method user_type()
    professor_type->user_type();                    // example of polymorphism that goes from User class into Professor class method user_type()


    Student student2("Student number 2");           // Creating another student object that will have its own fields including grades
    std::cout << student2.get_name() << std::endl;

    professor.set_grades(student2);
    //professor.view_grades(student2);

    std::cout << "Proving there are two students:" << std::endl;
    professor.view_grades(student);
    professor.view_grades(student2);

    return 0;
}