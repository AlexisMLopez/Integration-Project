# Welcome to my Integration Project.

In this project, I will be implementing OOP skills into the creation of a console application using C++. 

Doxygen Class Diagrams: 
https://amlopez5841.github.io/Integration-Project/html/

### LO4. Include a comment in which you compare and contrast the procedural/functional approach and the object-oriented approach

Object oriented programming is based all around objects while Procedural is based around functions. OOP has the advantage of having access to Polymorphism, Inheritance, and Encapsulation, which procedural does not. OOP is better suited to mid to large scale coding projects whilst Procedural can be done at the very small scale OOP is based entirely on reusing code without having to make drastic changes that occcurs when you edit code in procedural. OOP provides information hiding (Encapsulation) so it is safer than using procedural (private info can be used by anyone). OOP makes it possible to overload, whereas it is not possible in procedural. Without inheritance, polymorphism is impossible.The heart of polymorphism is overridding. (Sub classes will override the methods within the base class). Interface classes: no member variables and all pure virtual functions.

### LO2a. Include comments describing the visibility inheritance model

Courses is the base class and User is the derived class to the Courses class. The User class inherits from the Courses base class as well. The Student and Professor classes are derived classes that inherit from the User class.

### LO5. Explain the relationship between object-oriented inheritance (code-sharing and overriding) and subtyping (the idea of a subtype being usable in a context that expects the supertype).

Subtyping: is a type of polymorphism known as inclusion polymorphism. It is accessing the derived classes through the base classes with pointers and references (virtual functions are an example).

Object Oriented Inheritance: Through subtyping this allows us to override the virtual function that we created which allows us to achieve object oriented inheritance.
Other methods to achieve overriding through object oriented inheritance would include using templates.

![Screenshot 2021-12-15 135200](https://user-images.githubusercontent.com/74120068/146247426-47a33f2c-7d0b-4e07-babc-80c434381c88.png)

