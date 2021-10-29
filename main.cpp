#include <iostream>
#include "mainwindow.h"
#include "student.h"

#include <QApplication>
/* OOP vs Procedural/Functional:
 * Object oriented programming is based all around objects while Procedural is based around functions.
 * OOP has the advantage of having access to Polymorphism, Inheritance, and Encapsulation, which procedural does not.
 * OOP is better suited to mid to large scale coding projects whilst Procedural can be done at the very small scale
 * OOP is based entirely on reusing code without having to make drastic changes that occcurs when you edit code in procedural
 * OOP provides information hiding (Encapsulation) so it is safer than using procedural (private info can be used by anyone)
 * OOP makes it possible to overload, whereas you cannot in procedural
*/
// Visibility inheritance model: Courses is the base class. User is a derived class that inherits from the Courses base class
// Student and Professor are derived classes that inherit from the User class.
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    std::cout << "Please enter you credentials (Username and Password)" << std::endl;
    Student user1;											//instance of student class object to test default constructor
    std::cout << user1.get_idnum() << std::endl;
    Student user2;                                          //instance of student class object to test property constructor
    user2.set_idnum("A123456");
    std::cout << user2.get_idnum() << std::endl;

    std::cout << user2.get_name() << std::endl;

    user2.set_name("Alexis Lopez");
    std::cout << user2.get_name() << std::endl;

    user2.set_grades();             // non trivial method in Courses class that let's the professor enter grades

    user2.get_grades();             // non trivial method in Courses class that let's the professor view entered grades

    Student user3("Benny");         // showing another overloaded constructor from student class to create an object

    std::cout << user3.get_name() << std::endl;

    return a.exec();
}
