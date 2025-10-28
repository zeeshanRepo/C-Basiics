//Write some theory about functions in C++ as comments in the code
// Functions in C++ are blocks of code that perform a specific task.
// They help in organizing code, improving readability, and reusing code without rewriting it multiple times.
// A function typically consists of a function declaration (or prototype), a function definition, and a function call.
// The function declaration specifies the function's name, return type, and parameters (if any).
// The function definition contains the actual code that executes when the function is called.
// Functions can return values to the caller using the return statement, or they can be void functions that do not return any value.

#include <iostream>
using namespace std;
// Function declaration
// int add(int a, int b); // Function prototype

// Function definition
int add(int a, int b) {
    return a + b;
}

// Function call
int main() {
    int result = add(5, 10);
    cout << "The sum is: " << result << endl;
    return 0;
}


// Calculator with Multiple Functions
#include <iostream>
using namespace std;

// Function declarations (optional but good practice)
int add(int a, int b);
int sub(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

// Function definitions
int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b == 0) {
        cout << "Error! Division by zero." << endl;
        return 0;
    }
    return (float)a / b;
}

// Main function
int main() {
    int x = 10, y = 5;

    cout << "Addition: " << add(x, y) << endl;
    cout << "Subtraction: " << sub(x, y) << endl;
    cout << "Multiplication: " << multiply(x, y) << endl;
    cout << "Division: " << divide(x, y) << endl;

    return 0;
}

// You can make it more fun by taking input from users:
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Add: " << add(a, b) << endl;
    cout << "Sub: " << sub(a, b) << endl;
    cout << "Mul: " << multiply(a, b) << endl;
    cout << "Div: " << divide(a, b) << endl;

    return 0;
}




// Write a C++ program to understand functions in C++ using comments for easier understanding
#include <iostream>
using namespace std;
// Function to calculate the area of a rectangle

float calculateArea(float length, float width) {
    return length * width;
}

int main() {
    float length, width;

    // Input length and width from the user
    cout << "Enter length of the rectangle: ";
    cin >> length;
    cout << "Enter width of the rectangle: ";
    cin >> width;

    // Call the function to calculate area
    float area = calculateArea(length, width);

    // Display the area
    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}