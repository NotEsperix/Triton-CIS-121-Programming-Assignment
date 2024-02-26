/******************************************
* Edgardo Richard Ventura                 *
* Week 5                                  *
* Assignment 1                            *
* Frank Alvino                            *
* CIS 121-061                             *
*******************************************/
#include <iostream>
#include <string>
using namespace std;
int main()
{
	// define variables
	string ln;
	float score;
	char lg;

	// input phase
	cout << "  Enter Student's Last Name: ";
	cin >> ln;
	cout << "Enter Percent Grade (0-100): ";
	cin >> score;


	// process phase - determine letter grade
	if (score >= 90 and score <= 100)
		lg = 'A';
	else if (score >= 80 and score < 90)
		lg = 'B';
	else if (score >= 70 and score < 80)
		lg = 'C';
	else if (score >= 60 and score < 70)
		lg = 'D';
	else if (score >= 0 and score < 60)
		lg = 'F';
	else
		lg = '?';

	//output phase
	if (score >= 90 and score <= 100) {
		cout << "\nStudent " << ln << " did a wonderful job!" << endl;
		cout << "They completed the letter grade: " << lg << endl;
	}
	else if (score >= 80 and score < 90) {
		cout << "\nStudent " << ln << " did a great job!" << endl;
		cout << "They earned the letter grade: " << lg << endl;
	}
	else if (score >= 70 and score < 80) {
		cout << "\nStudent " << ln << " completed the task at hand." << endl;
		cout << "They earned the letter grade: " << lg << endl;
	}
	else if (score >= 60 and score < 70) {
		cout << "\nStudent " << ln << " compleated the task, though they may need more time to study." << endl;
		cout << "They earned the letter grade: " << lg << endl;
	}
	else if (score >= 0 and score < 60) {
		cout << "\nStudent " << ln << " seems to be struggling a bit and may need more assistance." << endl;
		cout << "They earned the letter grade: " << lg << endl;
	}
	else
		cout << "\nAh you sneaky, sneaky. Don't be a meanie head butt face.\nIf you try that again I'm going to tell on you." << endl;


	return 0;
} // End of main