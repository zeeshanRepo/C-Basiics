// Generate a code to explain class with a simple example in C++ with comments for easier understanding
// take students as example
// A class is a blueprint for creating objects. It defines properties and behaviors that the objects created from the class will have.
// In this example, we will create a class called "Student" that represents a student with properties like name and age, and behaviors like displaying student information.
// We will then create an object of the Student class and use its methods.
// Keep it simple dont use private  and constructors keep the code short and simple to understand.




#include <iostream>
#include <string>
using namespace std;

// Class definition
class Student {
  // Properties (attributes)
  public:
    string name;
    int age;

  // Behaviors (methods)
  public:
    // Method to display student information
    void displayInfo() {
      cout << "Student Name: " << name << endl;
      cout << "Student Age: " << age << endl;
    }
};

int main() {
  // Creating an object of the Student class
  Student student1;
  student1.name = "Alice";
  student1.age = 20;

  Student student2;
  student2.name = "Bob";
  student2.age = 22;

  // Calling the method to display student information
  student1.displayInfo();
  student2.displayInfo();

  return 0;
}


// In the provided example of the "Student" class, we see how classes and objects work together:
// - The "Student" class encapsulates the properties (name and age) and behaviors (displayInfo method) related to a student.
// - We create multiple objects (student1 and student2) from the "Student" class, each representing a different student with its own unique data.
// - The displayInfo method allows us to easily display the information of each student object. This demonstrates how classes and objects help in organizing and managing data effectively.

// Give  a new coding questions to students based on the above code apart from car 
// Coding Question:
// Create a class called "Book" that represents a book with properties like title, author, and number of pages.
// Include a method to display the book information.
// Create two objects of the Book class and display their information using the method you created.
// Example Output:
// Book Title: The Great Gatsby
// Book Author: F. Scott Fitzgerald
// Number of Pages: 218

//One more question
// Create a class called "Movie" that represents a movie with properties like title, director, and duration (in minutes).
// Include a method to display the movie information.
// Create two objects of the Movie class and display their information using the method you created.
// Example Output:
// Movie Title: Inception
// Movie Director: Christopher Nolan
// Duration: 148 minutes

// generate a code for teachers class storing teacher name subject year of experience ,create two objects and display the information.
#include <iostream>
#include <string>

using namespace std;
class Teacher {
  public:
    string name;
    string subject;
    int yearsOfExperience;

  public:
    void displayInfo() {
      cout << "Teacher Name: " << name << endl;
      cout << "Subject: " << subject << endl;
      cout << "Years of Experience: " << yearsOfExperience << endl;
    }
};
int main() {
  Teacher teacher1;
  teacher1.name = "Mr. Smith";
  teacher1.subject = "Mathematics";
  teacher1.yearsOfExperience = 10;

  Teacher teacher2;
  teacher2.name = "Ms. Johnson";
  teacher2.subject = "Science";
  teacher2.yearsOfExperience = 8;

  teacher1.displayInfo();
  cout << endl; // Adding a line break for better readability
  teacher2.displayInfo();

  return 0;
}