// Loops (Part 1 – For Loop)

// Introduction to loops

// Loops in C++ are used to execute a block of code repeatedly until a certain condition is met. 
// They help in reducing code redundancy and make it easier to manage repetitive tasks. 
// The most commonly used loops in C++ are:
// 1. For Loop: Used when the number of iterations is known beforehand.
// 2. While Loop: Used when the number of iterations is not known and depends on a condition.
// 3. Do-While Loop: Similar to the while loop, but guarantees that the
//    block of code will be executed at least once before checking the condition.
// 4. Nested Loops: Loops inside other loops, useful for multi-dimensional data structures.



// for loop syntax
// write a pgm to understandd a loop syntax 
#include <iostream>
using namespace std;

int main() 
{
    // for loop to print numbers from 1 to 5
    for(int i = 1; i <= 5; i++) 
    {
        cout << i << " ";
    }
    cout << endl; // New line after the loop
    return 0;
}

// Nested for loops 
// write a pgm to understandd a nested loop syntax
#include <iostream>
using namespace std;

int main() 
{
    // Nested for loop to print a 5x5 grid of asterisks
    for(int i = 1; i <= 5; i++) 
    {
        for(int j = 1; j <= 5; j++) 
        {
            cout << "* ";
        }
        cout << endl; // New line after each row
    }
    return 0;
}


// Print multiplication table of a number using for loop
#include <iostream>
using namespace std;

int main() 
{
    int number;
    cout << "Enter a number to display its multiplication table: ";
    cin >> number;

    // For loop to print multiplication table
    for(int i = 1; i <= 10; i++) 
    {
        cout << number << " x " << i << " = " << number * i << endl;
    }
    return 0;
}

// Print even numbers from 1 to 100 using for loop
#include <iostream>
using namespace std;

int main() 
{
    cout << "Even numbers from 1 to 100 are: " << endl;
    // For loop to print even numbers
    for(int i = 1; i <= 100; i++) 
    {
        if(i % 2 == 0) // Check if the number is even
        {
            cout << i << " ";
        }
    }
    cout << endl; // New line after the loop
    return 0;
}
