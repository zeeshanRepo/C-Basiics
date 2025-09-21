// Control Structures (Decision Making)

// Control structures are essential for making decisions in programming. 
// They allow the execution of certain blocks of code based on specific conditions. 
// In C++, the primary control structures for decision-making are the 
// if statement, if-else statement, if-else if ladder, nested if statements, and switch statement.



// Topics:

// Write a program which explains control structures in c++ with comments for easier understanding start with if statement
// if statement (check positive number)
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    // If statement to check if the number is positive
    if (number > 0) {
        cout << number << " is a positive number." << endl;
    }

    return 0;
}


//  if-else statement (check even/odd)
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    // If-else statement to check if the number is even or odd
    if (number % 2 == 0) {
        cout << number << " is an even number." << endl;
    } else {
        cout << number << " is an odd number." << endl;
    }

    return 0;
}

// if-else if ladder (find largest of three numbers)

#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // If-else if ladder to find the largest number
    if (num1 >= num2 && num1 >= num3) {
        cout << num1 << " is the largest number." << endl;
    } else if (num2 >= num1 && num2 >= num3) {
        cout << num2 << " is the largest number." << endl;
    } else {
        cout << num3 << " is the largest number." << endl;
    }

    return 0;
}



// Nested if statements (check positive/negative/zero)
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    // Nested if statements to check if the number is positive, negative, or zero
    if (number >= 0) {
        if (number == 0) {
            cout << "The number is zero." << endl;
        } else {
            cout << number << " is a positive number." << endl;
        }
    } else {
        cout << number << " is a negative number." << endl;
    }

    return 0;
}


// switch statement use some other exmaple other than calculator program

// Program to display the day of the week based on user input (1-7)

#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter a number (1-7) to get the corresponding day of the week: ";
    cin >> day;

    // Switch statement to determine the day of the week
    switch(day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid input! Please enter a number between 1 and 7." << endl;
            break;
    }

    return 0;
}


// SImple Calculator program using switch statement
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
