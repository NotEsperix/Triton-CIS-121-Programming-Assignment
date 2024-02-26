/******************************************
* Edgardo Richard Ventura                 *
* Week 5                                  *
* Assignment 2                            *
* Frank Alvino                            *
* CIS 121-061                             *
*******************************************/
#include <iostream>
#include <iomanip> // For setting precision
using namespace std;
int main()
{
    // Define variables
    float lbs, ppp, tp;

    // Input phase
    cout << "**Welcome to Lilith's Apple Emporium**\nOur apples are so good, they outta be a sin!" << endl;
    cout << "\nWe see you're looking to buy our ouroboros apples." << endl;
    cout << "Please enter the number of lbs you'd like to buy: ";
    cin >> lbs;

    // Process phase - Determine price per pound based on quantity
    if (lbs > 100)
        ppp = 0.10; // Price per pound for quantities over 100 lbs
    else if (lbs >= 50)
        ppp = 0.25; // Price per pound for quantities between 50 and 100 lbs
    else
        ppp = 0.50; // Price per pound for quantities under 50 lbs

    // Calculate total price
    tp = lbs * ppp;

    // Output phase
    cout << setprecision(2) << fixed; // Set precision to 2 decimal places
    if (lbs > 100) {
        cout << "\nLooks like your'e intrested in our Gluttony package deal!" << endl;
        cout << "The price per pound on this deal is : $" << ppp << endl;
        cout << "Total price: $" << tp << endl;
    }
    else if (lbs >= 50) {
        cout << "\nLooks like your'e intrested in our FoMO package deal" << endl;
        cout << "Price per pound: $" << ppp << endl;
        cout << "Total price: $" << tp << endl;
    }
    else {
        cout << "\nThank you for choosing us to provide you our sinfully tastey apples!" << endl;
        cout << "Price per pound: $" << ppp << endl;
        cout << "Total price: $" << tp << endl;
    }

    return 0;
}
