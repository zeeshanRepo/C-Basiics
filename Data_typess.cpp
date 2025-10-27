// Write a C++ program to understand Data types of  C++ using comments for easier understanding
// Give Some theory about data types in C++ as comments in the code
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
