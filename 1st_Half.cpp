// Write a simple c++ program to print hello world

#include <iostream>
// using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    // cout << "Hello, World!" << endl;
    return 0;
}

// Adding two numbers without user input

#include <iostream>
// using namespace std;

int main() 
{
    int a = 5;
    int b = 10;
    int sum = a + b;
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}


// Take user input and display output

#include <iostream>
// using namespace std;
int main() 
{
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    int sum = num1 + num2;
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}

// cin / cout

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: "; // Output to the console
    cin >> number;              // Input from the user
    cout << "You entered: " << number << endl; // Display the entered number
    return 0;
}




