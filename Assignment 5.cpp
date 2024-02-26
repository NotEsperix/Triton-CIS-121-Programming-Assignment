/******************************************
* Edgardo Richard Ventura                 *
* Week 5                                  *
* Assignment 5                            *
* Frank Alvino                            *
* CIS 121-061                             *
*******************************************/
#include <iostream>
#include <iomanip> // For setting precision
using namespace std;

int main() {
    // Define variables
    double lbs, rpp, total;

    // Input phase
    cout << "Enter the weight (in pounds) of metal you're choosing to scrap: ";
    cin >> lbs;

    // Process phase - Determine rate per pound based on weight
    // Rate for weights over 100 pounds
    if (lbs > 100) 
        rpp = 0.50; 
    // Rate for weights between 30 and 100 pounds
    else if (lbs >= 30 and lbs <= 100)
        rpp = 0.25; 
    // Rate for weights between 20 and 30 pounds
    else if (lbs >= 20 and lbs < 30)
        rpp = 0.20; 
    // Rate for weights 20 pounds or less
    else 
        rpp = 0.10;

    // Calculate total payment
    total = lbs * rpp;

    // Output phase
    cout << setprecision(2) << fixed;
    cout << "\nTotal scrapped weight: " << lbs << "lbs" << endl;
    cout << "       Rate per Pound: $" << rpp << endl;
    cout << "  Today's otal payout: $" << total << endl;

    return 0;
}
