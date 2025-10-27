/*
Variables in C++ are used to store data that can be used and manipulated throughout a program.
They are essentially named storage locations in memory that hold values of specific data types.
To declare a variable, you need to specify its data type followed by its name.*/

/// Data types in C++ define the type of data that a variable can hold.
// Common data types include int (integer), float (floating-point number), double (double-precision floating-point number),
// char (character), bool (boolean), and string (sequence of characters).
// difference between float and double is that float is single precision and double is double precision
// data types help the compiler allocate the appropriate amount of memory and determine how to interpret the data.
// Using the correct data type is essential for efficient memory usage and accurate data representation.



#include <iostream>
using namespace std;

int main() {
    // Integer data type: used to store whole numbers
    int myInt = 10;
    cout << "Integer: " << myInt << endl;

    // Float data type: used to store decimal numbers
    float myFloat = 5.75;
    cout << "Float: " << myFloat << endl;

    // Double data type: used to store larger decimal numbers with more precision
    double myDouble = 19.99;
    cout << "Double: " << myDouble << endl;

    // Character data type: used to store single characters
    char myChar = 'A';
    cout << "Character: " << myChar << endl;

    // Boolean data type: used to store true or false values
    bool myBool = true;
    cout << "Boolean: " << myBool << endl;

    // String data type: used to store a sequence of characters (text)
    string myString = "Hello, C++!";
    cout << "String: " << myString << endl;

    return 0;
}


/* A program to collect and display user information including name, age, height, weight, 
and grade using appropriate data types in C++.*/

#include <iostream>
using namespace std;
int main() {
    // Declare variables of different data types
    int age;
    float height;
    double weight;
    char grade;
    string name;

    // Input values from the user
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your height (in feet): ";
    cin >> height;
    cout << "Enter your weight (in pounds): ";
    cin >> weight;
    cout << "Enter your grade (A-F): ";
    cin >> grade;

    // Display the collected information
    cout << "\n--- User Information ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " feet" << endl;
    cout << "Weight: " << weight << " pounds" << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}




