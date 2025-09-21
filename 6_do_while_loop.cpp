//  (Part 2 – While & Do-While)

// Give some theory on While & Do-While.
// while and do while loop theory 
// In C++, loops are used to execute a block of code repeatedly until a certain condition is met.
// The while loop checks the condition before executing the block of code,
// whereas the do-while loop executes the block of code at least once before checking the condition.
// This means that the do-while loop will always run at least one time, even if the condition is false from the beginning.

//  write a simple code on while loop with comments for better understanding 
#include <iostream>
using namespace std;

int main() 
{
    int count = 1; // Initialize counter variable

    // While loop to print numbers from 1 to 5
    while(count <= 5) 
    {
        cout << count << " "; // Print the current value of count
        count++; // Increment the counter variable
    }
    cout << endl; // New line after the loop
    return 0;
}

// write a simple code on do  while loop with comments for better understanding  
#include <iostream>
using namespace std;

int main() 
{
    int count = 1; // Initialize counter variable

    // Do-while loop to print numbers from 1 to 5
    do 
    {
        cout << count << " "; // Print the current value of count
        count++; // Increment the counter variable
    } while(count <= 5); // Check the condition after executing the loop body

    cout << endl; // New line after the loop
    return 0;
}

// Difference between them
// The main difference between while and do-while loops is when the condition is checked.
// In a while loop, the condition is checked before executing the loop body,
// whereas the do-while loop executes the loop body at least once before checking the condition.


// 3 Hands on programs on while and do while loop

// Print multiplication table of a number using while loop
#include <iostream>
using namespace std;

int main() 
{
    int number;
    cout << "Enter a number to display its multiplication table: ";
    cin >> number;

    int i = 1; // Initialize counter variable
    // While loop to print multiplication table
    while(i <= 10) 
    {
        cout << number << " x " << i << " = " << number * i << endl; // Print the multiplication result
        i++; // Increment the counter variable
    }
    return 0;
}
// Print multiplication table of a number using do while loop
#include <iostream>
using namespace std;

int main() 
{
    int number;
    cout << "Enter a number to display its multiplication table: ";
    cin >> number;

    int i = 1; // Initialize counter variable
    // Do-while loop to print multiplication table
    do 
    {
        cout << number << " x " << i << " = " << number * i << endl; // Print the multiplication result
        i++; // Increment the counter variable
    } while(i <= 10); // Check the condition after executing the loop body

    return 0;
}

// Program to find the sum of first N natural numbers using while loop
#include <iostream> 
using namespace std;    

int main() 
{
    int N, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> N;

    int i = 1; // Initialize counter variable
    // While loop to calculate the sum of first N natural numbers
    while(i <= N) 
    {
        sum += i; // Add the current value of i to sum
        i++; // Increment the counter variable
    }

    cout << "Sum of first " << N << " natural numbers is: " << sum << endl; // Output the result
    return 0;
}

// Program to find the sum of first N natural numbers using do while loop

#include <iostream>

using namespace std;

int main() 
{
    int N, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> N;

    int i = 1; // Initialize counter variable
    // Do-while loop to calculate the sum of first N natural numbers
    do 
    {
        sum += i; // Add the current value of i to sum
        i++; // Increment the counter variable
    } while(i <= N); // Check the condition after executing the loop body

    cout << "Sum of first " << N << " natural numbers is: " << sum << endl; // Output the result
    return 0;
}


