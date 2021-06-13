// pinValidationApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
	int userPin = 1234, pin, errorCounter = 0;
	do {
		cout << "Pin: ";
		cin >> pin;
		if (pin != userPin)
			errorCounter++;

	} while (errorCounter<3 && pin!=userPin);
	if (errorCounter < 3)
		cout << "Loading...";
	else
		cout << "Account Blocked.";
}




