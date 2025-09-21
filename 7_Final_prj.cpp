// break and continue statement in loops
// Theory 
// The break statement is used to exit a loop or switch statement prematurely when a certain condition is met.
// It immediately terminates the loop and transfers control to the statement following the loop.
// The continue statement is used to skip the current iteration of a loop and proceed to the next iteration.
// It does not terminate the loop but rather jumps to the next iteration based on the loop's condition.

// Write a program which explains break  statement in c++ with comments for easier understanding
#include <iostream>
using namespace std;

int main() 
{
    // For loop to print numbers from 1 to 10
    for(int i = 1; i <= 10; i++) 
    {
        if(i == 5) 
        {
            break; // Exit the loop when i equals 5
        }
        cout << i << " "; // Print the current value of i
    }
    cout << endl; // New line after the loop
    return 0;
}

// Write a program which explains continue  statement in c++ with comments for easier understanding
#include <iostream>
using namespace std;

int main() 
{
    // For loop to print numbers from 1 to 10
    for(int i = 1; i <= 10; i++) 
    {
        if(i == 5) 
        {
            continue; // Skip the iteration when i equals 5
        }
        cout << i << " "; // Print the current value of i
    }
    cout << endl; // New line after the loop
    return 0;
}

//Mini Project Ideas 

// Simple ATM program (balance, deposit, withdraw using switch)
// This project simulates a basic ATM system where users can deposit, withdraw, and check their account balance.
// It uses a loop to allow multiple transactions until the user decides to exit.



#include <iostream>
using namespace std;

int main() {
    int choice;
    float balance = 0.0;

    do {
        cout << "ATM Menu:\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                float deposit;
                cout << "Enter deposit amount: ";
                cin >> deposit;
                balance += deposit;
                cout << "Deposited: " << deposit << endl;
                break;
            case 2:
                float withdraw;
                cout << "Enter withdrawal amount: ";
                cin >> withdraw;
                if (withdraw > balance) {
                    cout << "Insufficient funds!\n";
                } else {
                    balance -= withdraw;
                    cout << "Withdrawn: " << withdraw << endl;
                }
                break;
            case 3:
                cout << "Current balance: " << balance << endl;
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}

// Student Grade Calculator (marks → percentage → grade)
// give a good overview of the program with steps 
// This program calculates the percentage and grade of a student based on their marks in five subjects.
// It takes input for marks, computes the total and percentage, and then determines the grade using if-else statements.

#include <iostream>
using namespace std;

int main() {
    int marks[5];
    int total = 0;
    float percentage;
    char grade;

    // Input marks for 5 subjects
    cout << "Enter marks for 5 subjects (out of 100):\n";
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << (i + 1) << ": ";
        cin >> marks[i];
        total += marks[i]; // Calculate total marks
    }

    // Calculate percentage
    percentage = (total / 500.0) * 100;

    // Determine grade based on percentage
    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    // Output results
    cout << "Total Marks: " << total << "/500\n";
    cout << "Percentage: " << percentage << "%\n";
    cout << "Grade: " << grade << endl;

    return 0;
}

// Menu-driven program (loops + switch)
// This program presents a menu to the user with options to perform different arithmetic operations.
// It uses a loop to allow multiple operations until the user chooses to exit.
#include <iostream>
using namespace std;

int main() {
    int choice;
    float num1, num2;

    do {
        cout << "Menu:\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }

        switch (choice) {
            case 1:
                cout << "Result: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Result: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Result: " << num1 * num2 << endl;
                break;
            case 4:
                if (num2 != 0) {
                    cout << "Result: " << num1 / num2 << endl;
                } else {
                    cout << "Error! Division by zero." << endl;
                }
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}