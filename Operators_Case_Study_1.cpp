/* small bussines want to calculate the total revenue genereted by selling products they sell 3 type of products a,b,c
product a sold for 10 quantity 5
product b sold for 15 quantity 3
product c sold for 7 quantity 8*/

#include <iostream>
using namespace std;

int main()
{
    int price_a = 10, quantity_a = 5;
    int price_b = 15, quantity_b = 3;
    int price_c = 7, quantity_c = 8;

    int revenue_a = price_a * quantity_a;
    int revenue_b = price_b * quantity_b;
    int revenue_c = price_c * quantity_c;

    int total_revenue = revenue_a + revenue_b + revenue_c;

    cout << "Total Revenue: " << total_revenue << endl;
    return 0;
    
}



//Give me a similar case study for operators in c++ 
/* A small cafe wants to calculate the total cost of an order. The order consists of 2 coffees, 3 sandwiches, and 1 cake.
// The prices are as follows: coffee costs $4, sandwich costs $6, and cake costs $5. Use operators to calculate the total cost.*/

#include <iostream>
using namespace std;
int main()
{
    int price_coffee = 4, quantity_coffee = 2;
    int price_sandwich = 6, quantity_sandwich = 3;
    int price_cake = 5, quantity_cake = 1;

    int cost_coffee = price_coffee * quantity_coffee;
    int cost_sandwich = price_sandwich * quantity_sandwich;
    int cost_cake = price_cake * quantity_cake;

    int total_cost = cost_coffee + cost_sandwich + cost_cake;

    cout << "Total Cost of the Order: $" << total_cost << endl;
    return 0;
}

// now make this program dynamic by taking input from user for quantity of each item
// use simple names for variables small 
#include <iostream>
using namespace std;
int main()
{
    int price_coffee = 4;
    int price_sandwich = 6;
    int price_cake = 5;

    int qty_coffee, qty_sandwich, qty_cake;

    cout << "Enter quantity of coffee: ";
    cin >> qty_coffee;

    cout << "Enter quantity of sandwiches: ";
    cin >> qty_sandwich;

    cout << "Enter quantity of cakes: ";
    cin >> qty_cake;

    int cost_coffee = price_coffee * qty_coffee;
    int cost_sandwich = price_sandwich * qty_sandwich;
    int cost_cake = price_cake * qty_cake;

    int total_cost = cost_coffee + cost_sandwich + cost_cake;

    cout << "Total Cost of the Order: $" << total_cost << endl;
    return 0;
}


