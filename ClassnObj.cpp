#include <iostream>
using namespace std;

class Car {
    string brand;
    int speed;
};

int main() {
    Car car1;
    car1.brand = "BMW";     // ❌ Error: brand is private by default
    car1.speed = 200;
    cout << car1.brand << " " << car1.speed;
    return 0;
}


#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int speed;

    void display() {
        cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
    }
};


Explain the 3 Output Methods Clearly
Method	Code	What it shows
1️⃣ Direct Access	cout << car1.brand << car1.speed;	Quick and simple
2️⃣ Using Function	car1.display();	Clean and reusable
3️⃣ Formatted Output	Combine text + variables	Professional display


int main() {
    Car car1;
    car1.brand = "Tesla";
    car1.speed = 250;

    // Different ways to display output
    cout << car1.brand << " " << car1.speed << endl;    // Way 1: Direct access
    car1.display();                                     // Way 2: Using class function
    cout << "Car details -> Brand: " << car1.brand 
         << ", Speed: " << car1.speed << " km/h" << endl; // Way 3: Inline formatting

    return 0;
}
