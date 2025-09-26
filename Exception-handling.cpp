
//Division of 2 numbers 
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;
    try{
        if (b == 0)
        {
        
            throw "Division by zero not allowed";
        }
        
        cout << "Result : "<< a/b << endl;
        }
    catch (...)
    {  // catch anything 
        cout<<"Error: Division by zero not allowed "<<endl;

    }
    cout <<"Program continues safely "<<endl;
    return 0;
}


// A kid has 20 chocolates. Write a program to divide chocolates among friends.

// If number of friends = 0 → throw an exception.

// Else → print how many chocolates each friend gets.
