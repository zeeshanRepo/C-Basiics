// Case Study: Operators in C++

// 1. What are operators in C++?
//    Operators are special symbols that perform operations on variables and values. C++ provides a rich set of operators to manipulate data.

// 2. What are the different types of operators in C++?
//    C++ has several types of operators, including:
//    - Arithmetic Operators: Used to perform basic mathematical operations.
//    - Relational Operators: Used to compare two values.
//    - Logical Operators: Used to perform logical operations.

// 3. Can you give examples of arithmetic operators in C++?
//    Sure! Here are some examples:
//    - Addition: `+`
//    - Subtraction: `-`
//    - Multiplication: `*`
//    - Division: `/`
//    - Modulus: `%`

// 4. How do relational operators work in C++?
//    Relational operators compare two values and return a boolean result (true or false). For example:
//    - Equal to: `==`
//    - Not equal to: `!=`
//    - Greater than: `>`
//    - Less than: `<`
//    - Greater than or equal to: `>=`
//    - Less than or equal to: `<=`

// 5. What are logical operators used for in C++?
//    Logical operators are used to combine or invert boolean values. The three main logical operators are:
//    - Logical AND: `&&`
//    - Logical OR: `||`
//    - Logical NOT: `!`



//  Write a program which explains operators in c++ with comments for easier understanding

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 5;

    // Arithmetic Operators
    cout << "Addition: " << a + b << endl;        // +
    cout << "Subtraction: " << a - b << endl;     // -
    cout << "Multiplication: " << a * b << endl;  // *
    cout << "Division: " << a / b << endl;        // /
    cout << "Modulus: " << a % b << endl;         // %

    // Relational Operators
    cout << "Equal to: " << (a == b) << endl;     // ==
    cout << "Not equal to: " << (a != b) << endl; // !=
    cout << "Greater than: " << (a > b) << endl;   // >
    cout << "Less than: " << (a < b) << endl;      // <
    cout << "Greater than or equal to: " << (a >= b) << endl; // >=
    cout << "Less than or equal to: " << (a <= b) << endl;    // <=

    // Logical Operators
    cout << "Logical AND: " << (a > 0 && b > 0) << endl; // &&
    cout << "Logical OR: " << (a > 0 || b < 0) << endl;  // ||
    cout << "Logical NOT: " << !(a > 0) << endl;          // !

    return 0;
}



// Operator:

// Program: check if a number is even/odd 
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    // Using modulus operator to check even or odd
    if (number % 2 == 0)
        cout << number << " is even." << endl;
    else
        cout << number << " is odd." << endl;

    return 0;
}

// Write calculator program using   normal operators 

#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch(op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if(num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            else
                cout << "Error! Division by zero." << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
            break;
    }

    return 0;
}




// Program: largest of two numbers
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Using relational operator to find the largest number
    if (num1 > num2)
        cout << num1 << " is the largest number." << endl;
    else if (num2 > num1)
        cout << num2 << " is the largest number." << endl;
    else
        cout << "Both numbers are equal." << endl;

    return 0;
}
