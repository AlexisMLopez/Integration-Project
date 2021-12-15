# Integration Project

This project is a C++ console output project. This is a student gradebook system that allows for different kinds of users to access the system. You can log in as either a student or a professor and utilize unique methods depending on the user type. The program interacts with the user through a console window, and the control flow is intuative when navigating through the different options. I worked on this project individually throught the semester, and came up with all of the design and implementation. This project was made in Fall 2021 and the my level of proficiency was at a Programming II level. It was made as a semester long assignment, and was difficul but I met the majority of the requirements diligently.

## Demonstration

![Animation](https://user-images.githubusercontent.com/74120068/146275291-18ac62a6-b0a7-4d40-a8f0-a149b27c2ef8.gif)


## Documentation

For Python, use the output of your docstrings. For other languages, create a docs folder in your project. If using Java, generate JavaDoc in your IDE. If using C++, use Doxygen. Change repository settings (using Settings at top of page) to use GitHub Pages with your docs folder. Add a link to the javadoc/doxygen index.html file with this markdown: \[Text to appear]\(URL) <br />
The URL will be YourGitHubUserName.github.io/YourRepositoryName/foldername/filename<br /> 
Do not include the docs folder name in your URL. <br />
Sample: \[JavaDoc]\(https://pv-cop.github.io/PV-README-TEMPLATE/javadoc/index.html) <br /> <br />
[JavaDoc](https://pv-cop.github.io/PV-README-TEMPLATE/javadoc/index.html)

## Diagrams

Such as a class diagram. <br /> 
The markdown is  \!\[Alt text\]\(relative/path/to/img.png) <br />
For example, this image 9919.png is saved to the docs folder in my repository and the markdown is  \!\[Sample Image\](docs/9919.png) <br />
 ![Sample Image](docs/9919.png)

## Getting Started

Instructions to get a copy of the project up and running on someone's local machine for development and testing purposes.
<br />
Note for real project: You want to be able to share your project and enable collaboration. 
<br />
Note for school project: You want a potential client or hirer to be able to run your program. 

## Built With

* IDE used  
* Other software used  
* Resources used  
<br />Note for school project: Every section is an opportunity to make an impression. You could briefly add what you know about the IDE and describe your development skills. 

## Contributing

This section is more important for real projects but is good to include in school projects. <br />
One of the main purposes of GitHub and similar services is to provide a means for project collaboration. <br />
Tell someone how they can contribute to this project.

## Author

Alexis Lopez

## License

Public repositories on GitHub are often used to share open source software. For your repository to truly be open source, you'll need to license it so that others are free to use, change, and distribute the software. https://help.github.com/articles/licensing-a-repository/ <br />
You have the option to choose a license when you first create your repository. </br>
If you need to create a license for an existing repository...
1. Go to your repository.
2. Click on "Create new file" Button.
3. Type the file name as License.txt or License.md in the input box next to your repository name, a drop down button appears towards right side.
4. Choose the type of license of your choice.
5. Click "Commit new file" button at the bottom (Green button)
Credit https://stackoverflow.com/questions/31639059/how-to-add-license-to-an-existing-github-project <br />
To choose a license, see https://choosealicense.com/ 


## History

Information about what has changed. 

## Key Programming Concepts Utilized

This section would not necessarily be in a real README.  <br />
It is a reference for you and a place to impress potential employers with your knowledge. 
Identify what concepts you utilize so when you need to use them again you will know that you will find them here. Include a brief description of the concepts in your own words to help you prepare for related interview questions. 



# Welcome to my Integration Project.

In this project, I will be implementing OOP skills into the creation of a console application using C++. 

Doxygen Class Diagrams: 
https://amlopez5841.github.io/Integration-Project/html/

## LO4. Include a comment in which you compare and contrast the procedural/functional approach and the object-oriented approach

Object oriented programming is based all around objects while Procedural is based around functions. OOP has the advantage of having access to Polymorphism, Inheritance, and Encapsulation, which procedural does not. OOP is better suited to mid to large scale coding projects whilst Procedural can be done at the very small scale OOP is based entirely on reusing code without having to make drastic changes that occcurs when you edit code in procedural. OOP provides information hiding (Encapsulation) so it is safer than using procedural (private info can be used by anyone). OOP makes it possible to overload, whereas it is not possible in procedural. Without inheritance, polymorphism is impossible.The heart of polymorphism is overridding. (Sub classes will override the methods within the base class). Interface classes: no member variables and all pure virtual functions.

## LO2a. Include comments describing the visibility inheritance model

Courses is the base class and User is the derived class to the Courses class. The User class inherits from the Courses base class as well. The Student and Professor classes are derived classes that inherit from the User class.

## LO5. Explain the relationship between object-oriented inheritance (code-sharing and overriding) and subtyping (the idea of a subtype being usable in a context that expects the supertype).

Subtyping: is a type of polymorphism known as inclusion polymorphism. It is accessing the derived classes through the base classes with pointers and references (virtual functions are an example).

Object Oriented Inheritance: Through subtyping this allows us to override the virtual function that we created which allows us to achieve object oriented inheritance.
Other methods to achieve overriding through object oriented inheritance would include using templates.

![Screenshot 2021-12-15 135200](https://user-images.githubusercontent.com/74120068/146247426-47a33f2c-7d0b-4e07-babc-80c434381c88.png)

