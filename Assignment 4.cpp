/******************************************
* Edgardo Richard Ventura                 *
* Week 5                                  *
* Assignment 4                            *
* Frank Alvino                            *
* CIS 121-061                             *
*******************************************/
#include <iostream>
#include <iomanip> // For setting precision
using namespace std;

int main() {
    // Define variables
    double salary, tr, ta;

    // Input phase
    cout << "Welcome to (Enter Service Name)\nThank you for choosing us to show how much money we get to take from you and call it Taxing" << endl;
    cout << "Enter annual salary: $";
    cin >> salary;

    // Process phase - Determine tax rate based on salary
    // Tax rate for salaries over $100,000
    if (salary > 100000) 
        tr = 40.0; 
    // Tax rate for salaries between $50,000 and $100,000
    else if (salary >= 50000 and salary <= 100000) 
        tr = 35.0; 
    // Tax rate for salaries under $50,000
    else 
        tr = 25.0; 
    // Calculate tax amount
    ta = (tr / 100) * salary;

    // Output phase
    cout << setprecision(2) << fixed; // Set precision to 2 decimal places
    cout << "\n  Salary: $" << salary << endl;
    cout << "Tax Rate: " << tr << "%" << endl;
    cout << "Tax Owed: $" << ta << endl;

    return 0;
}