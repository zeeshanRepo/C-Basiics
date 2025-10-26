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