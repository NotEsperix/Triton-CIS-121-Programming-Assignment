/******************************************
* Edgardo Richard Ventura                 *
* Week 5                                  *
* Assignment 3                            *
* Frank Alvino                            *
* CIS 121-061                             *
*******************************************/
#include <iostream>
#include <iomanip> // For setting precision
#include <string>  // For using string data type
using namespace std;

int main() {
    // Define variables
    string ln;
    float hours, pr, total;
    char jc;

    // Input phase
    cout << "Enter employee's last name: ";
    cin >> ln;
    cout << "        Enter hours worked: ";
    cin >> hours;
    cout << "  Enter job code (E, J, A): ";
    cin >> jc;

    // Process phase - Determine pay rate based on job code
    if (jc == 'E' or jc == 'e')
        pr = 25.00; // Pay rate for job code E
    else if (jc == 'J' or jc == 'j')
        pr = 20.00; // Pay rate for job code J
    else if (jc == 'A' or jc == 'a')
        pr = 15.00; // Pay rate for job code A
    else {
        cout << "Invalid job code entered." << endl;
        return 1; // Exit the program if an invalid job code is entered
    }

    // Calculate total pay
    total = hours * pr;

    // Output phase
    cout << setprecision(2) << fixed; // Set precision to 2 decimal places
    cout << "Employee Last Name: " << ln << endl;
    if (jc == 'E' or jc == 'e')
        cout << "     Job worked as: Kangaroo wrangler" << endl;
    else if (jc == 'J' or jc == 'j')
        cout << "     Job worked as: Australian Gate Keeper" << endl;
    else if (jc == 'A' or jc == 'a')
        cout << "     Job worked as: Foot Massager" << endl;
    cout << "      Hours Worked: " << hours << endl;
    cout << "          Pay Rate: $" << pr << "/hour" << endl;
    cout << "         Total Pay: $" << total << endl;

    return 0;
}