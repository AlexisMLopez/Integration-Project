# Integration Project

In this project, I will be implementing OOP skills into the creation of a console application using C++.  This is a student gradebook system that allows for different kinds of users to access the system. You can log in as either a student or a professor and utilize unique methods depending on the user type. The program interacts with the user through a console window, and the control flow is intuative when navigating through the different options. I worked on this project individually throught the semester, and came up with all of the design and implementation. This project was made in Fall 2021 and the my level of proficiency was at a Programming II level. It was made as a semester long assignment, and was difficult but I met the majority of the requirements diligently. <br />

## Demonstration

![Animation](https://user-images.githubusercontent.com/74120068/146275291-18ac62a6-b0a7-4d40-a8f0-a149b27c2ef8.gif)


## Documentation

https://amlopez5841.github.io/Integration-Project/html/

## Diagrams

Course <br /> 
![course](https://user-images.githubusercontent.com/74120068/146275986-57666f7d-a2ba-45ba-b701-4ad36170029f.png)

User <br /> 
![user](https://user-images.githubusercontent.com/74120068/146275995-196c27cd-e09c-48aa-bf78-39955d551480.png)

Professor <br /> 
![professor](https://user-images.githubusercontent.com/74120068/146276001-9d3851a0-acca-4894-a823-a2176be63550.png)

Student <br /> 
![student](https://user-images.githubusercontent.com/74120068/146276005-560dbe16-b13c-433e-ae3b-8e330507d037.png)


## Getting Started

You will have to clone this github repositoty on to your own device using Visual Studio 2019. From there, nothing special has to be done to run the project.
Make sure to run the main file with the windows debugger to start the program.<br /> 

## Built With

* Visual Studio 2019 

## Contributing

Any contributions are worthwhile, the student functionality of the program has room to improve. <br /> 

## Author

Alexis Lopez <br /> 

## Key Programming Concepts Utilized

LO1. Design and implement a class. 

LO4. Include a comment in which you compare and contrast the procedural/functional approach and the object-oriented approach

LO1a. At least one class in a header file with non-trivial methods implemented in a cpp file

LO1b. Overload a constructor 

LO1c. Utilize an initialization list

LO2. Use subclassing to design simple class hierarchies that allow code to be reused for distinct subclasses.

LO2a. Include comments describing the visibility inheritance model

LO3. Correctly reason about control flow in a program using dynamic dispatch. 

LO5. Explain the relationship between object-oriented inheritance (code-sharing and overriding) and subtyping (the idea of a subtype being usable in a context that expects the supertype).

LO6. Use object-oriented encapsulation mechanisms such as interfaces and private members.

LO7. Define and use iterators and other operations on aggregates, including operations that take functions as arguments. 

Follow best practices for style and readability

Follow best practices for documentation

Include class diagrams for all classes in Readme

## LO4. Include a comment in which you compare and contrast the procedural/functional approach and the object-oriented approach

Object oriented programming is based all around objects while Procedural is based around functions. OOP has the advantage of having access to Polymorphism, Inheritance, and Encapsulation, which procedural does not. OOP is better suited to mid to large scale coding projects whilst Procedural can be done at the very small scale OOP is based entirely on reusing code without having to make drastic changes that occcurs when you edit code in procedural. OOP provides information hiding (Encapsulation) so it is safer than using procedural (private info can be used by anyone). OOP makes it possible to overload, whereas it is not possible in procedural. Without inheritance, polymorphism is impossible.The heart of polymorphism is overridding. (Sub classes will override the methods within the base class). Interface classes: no member variables and all pure virtual functions.

## LO2a. Include comments describing the visibility inheritance model

Courses is the base class and User is the derived class to the Courses class. The User class inherits from the Courses base class as well. The Student and Professor classes are derived classes that inherit from the User class.

## LO5. Explain the relationship between object-oriented inheritance (code-sharing and overriding) and subtyping (the idea of a subtype being usable in a context that expects the supertype).

Subtyping: is a type of polymorphism known as inclusion polymorphism. It is accessing the derived classes through the base classes with pointers and references (virtual functions are an example).

Object Oriented Inheritance: Through subtyping this allows us to override the virtual function that we created which allows us to achieve object oriented inheritance.
Other methods to achieve overriding through object oriented inheritance would include using templates.

## and more! (Covered as comments in the project)
