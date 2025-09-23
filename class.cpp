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


//////////////////////////



// Give  a new coding questions to students based on the above code apart from car 
// Coding Question:

// Create a class called "Book" that represents a book with properties like title, author, and number of pages.
// Include a method to display the book information.
// Create two objects of the Book class and display their information using the method you created.
// Example Output:
// Book Title: The Great Gatsby
// Book Author: F. Scott Fitzgerald
// Number of Pages: 218
// generate a code for this including set details 
// Add detailed comments for better understanding
// why do we use set details method
// set details method is used to set the details of the book in one go instead of setting each property individually.
#include <iostream>
#include <string>

using namespace std;
// Class definition
class Book {
  // Properties (attributes)
  public:
    string title;
    string author;
    int numberOfPages;

  // Behaviors (methods)
  public:
    // Method to set book details
    void setDetails(string t, string a, int n) {
      title = t;
      author = a;
      numberOfPages = n;
    }

    // Method to display book information
    void displayInfo() {
      cout << "Book Title: " << title << endl;
      cout << "Book Author: " << author << endl;
      cout << "Number of Pages: " << numberOfPages << endl;
    }
};

int main() {
  // Creating objects of the Book class
  Book book1;
  book1.setDetails("The Great Gatsby", "F. Scott Fitzgerald", 218);
  Book book2;
  book2.setDetails("1984", "George Orwell", 328); 
  // Calling the method to display book information
  book1.displayInfo();
  cout << endl; // Adding a line break for better readability
  book2.displayInfo();

  return 0;
}


//One more question
// Create a class called "Movie" that represents a movie with properties like title, director, and duration (in minutes).
// Include a method to display the movie information.
// Create two objects of the Movie class and display their information using the method you created.
// Example Output:
// Movie Title: Inception
// Movie Director: Christopher Nolan
// Duration: 148 minutes
// generate a code for this including set details 
// Add detailed comments for better understanding
// why do we use set details method
// set details method is used to set the details of the book in one go instead of setting each property individually.

#include <iostream>
#include <string>
using namespace std;

// Class definition
class Movie {
  // Properties (attributes)
  public:
    string title;
    string director;
    int duration; // in minutes

  // Behaviors (methods)
  public:
    // Method to set movie details
    void setDetails(string t, string d, int dur) {
      title = t;
      director = d;
      duration = dur;
    }

    // Method to display movie information
    void displayInfo() {
      cout << "Movie Title: " << title << endl;
      cout << "Movie Director: " << director << endl;
      cout << "Duration: " << duration << " minutes" << endl;
    }
};

int main() {
  // Creating objects of the Movie class
  Movie movie1;
  movie1.setDetails("Inception", "Christopher Nolan", 148);
  
  Movie movie2;
  movie2.setDetails("The Matrix", "The Wachowskis", 136);

  // Calling the method to display movie information
  movie1.displayInfo();
  cout << endl; // Adding a line break for better readability
  movie2.displayInfo();

  return 0;
}



//One More Question 
// Create a class called "Employee" that represents an employee with properties like name, position, and salary.
// Include a method to display the employee information.
// Create two objects of the Employee class and display their information using the method you created.

// Example Output:
// Employee Name: John Doe
// Employee Position: Software Engineer
// Employee Salary: $75000
// generate a code for this including set details
// Add detailed comments for better understanding
// why do we use set details method
// set details method is used to set the details of the employee in one go instead of setting each property individually.

#include <iostream>
#include <string>
using namespace std;

// Class definition
class Employee {
  // Properties (attributes)
  public:
    string name;
    string position;
    double salary;

  // Behaviors (methods)
  public:
    // Method to set employee details
    void setDetails(string n, string p, double s) {
      name = n;
      position = p;
      salary = s;
    }

    // Method to display employee information
    void displayInfo() {
      cout << "Employee Name: " << name << endl;
      cout << "Employee Position: " << position << endl;
      cout << "Employee Salary: $" << salary << endl;
    }
};

int main() {
  // Creating objects of the Employee class
  Employee employee1;
  employee1.setDetails("John Doe", "Software Engineer", 75000);

  Employee employee2;
  employee2.setDetails("Jane Smith", "Project Manager", 90000);

  // Calling the method to display employee information
  employee1.displayInfo();
  cout << endl; // Adding a line break for better readability
  employee2.displayInfo();

  return 0;
}

// Redesign the above code in which now we take user input for setting details of employee
#include <iostream>
#include <string>
using namespace std;

// Class definition
class Employee {
  // Properties (attributes)
  public:
    string name;
    string position;
    double salary;

  // Behaviors (methods)
  public:
    // Method to set employee details
    void setDetails(string n, string p, double s) {
      name = n;
      position = p;
      salary = s;
    }

    // Method to display employee information
    void displayInfo() {
      cout << "Employee Name: " << name << endl;
      cout << "Employee Position: " << position << endl;
      cout << "Employee Salary: $" << salary << endl;
    }
};

int main() {
  // Creating objects of the Employee class
  Employee employee1;
  string name;
  string position;
  double salary;

  // Taking user input for employee details
  cout << "Enter details for Employee 1:" << endl;
  cout << "Name: ";
  getline(cin, name);
  cout << "Position: ";
  getline(cin, position);
  cout << "Salary: ";
  cin >> salary;
  cin.ignore(); // To ignore the newline character after salary input
  employee1.setDetails(name, position, salary);

  Employee employee2;
  // Taking user input for second employee details
  cout << "\nEnter details for Employee 2:" << endl;
  cout << "Name: ";
  getline(cin, name);
  cout << "Position: ";
  getline(cin, position);
  cout << "Salary: ";
  cin >> salary;
  cin.ignore(); // To ignore the newline character after salary input
  employee2.setDetails(name, position, salary);

  // Calling the method to display employee information
  cout << "\nEmployee Details:" << endl;
  employee1.displayInfo();
  cout << endl; // Adding a line break for better readability
  employee2.displayInfo();

  return 0;
}




// Help with a saimple c++ program where i can teach getline with cin and cout with comments for better understanding
// simple few lines code  difference between getline and cin
// getline is used to read a full line of text including spaces, while cin reads input until the first space
// Example code to demonstrate the use of getline with cin and cout in C++
#include <iostream>
#include <string>
using namespace std;

int main() {
  string name;
  int age;

  // Using cout to prompt the user for their name
  cout << "Enter your name: ";
  // Using getline to read a full line of text (including spaces) for the name
  getline(cin, name);

  // Using cout to prompt the user for their age
  cout << "Enter your age: ";
  // Using cin to read an integer value for the age
  cin >> age;

  // Displaying the collected information using cout
  cout << "Hello, " << name << "! You are " << age << " years old." << endl;

  return 0;
}


// Generate a question in which we are using private and public access specifier in class with example code
// Question:
// Create a class called "Person" that has private properties for name and age.
// Include public methods to set and get the values of these properties.
// Create an object of the Person class, set the name and age using the public methods, and then retrieve and display these values.
// Example Output:
// Person Name: John
// Person Age: 30
// generate a code for this including set and get methods

#include <iostream>
#include <string>

using namespace std;

// Class definition

class Person {
  // Private properties (attributes)
  private:
    string name;
    int age;

  // Public methods to set and get the properties
  public:
    // Method to set the name
    void setName(string n) {
      name = n;
    }

    // Method to get the name
    string getName() {
      return name;
    }

    // Method to set the age
    void setAge(int a) {
      age = a;
    }

    // Method to get the age
    int getAge() {
      return age;
    }
};

int main() {
  // Creating an object of the Person class
  Person person1;

  // Setting the name and age using public methods
  person1.setName("John");
  person1.setAge(30);

  // Retrieving and displaying the name and age using public methods
  cout << "Person Name: " << person1.getName() << endl;
  cout << "Person Age: " << person1.getAge() << endl;

  return 0;
}


