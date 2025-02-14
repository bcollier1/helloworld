// Assignment 1.cpp : main project file.
// Assignment #: 1
// Date: February 13, 2018
// Name: Brady Collier

#include "stdafx.h"
#include <iostream>

using namespace std;

int main() {
	// Variables for month, day, year, loop, equation
	int month, month1;
	int day, day1;
	int year, year1;
	char ans = 'Y';
	int juldayold;
	int juldaynew;

	cout << "//////////////////////////////////////////////////////////////" << "\n";
	cout << "///                 Welcome to life calculator             ///" << "\n";
	cout << "///                                                        ///" << "\n";
	cout << "///                                                        ///" << "\n";
	cout << "/// In this program you will be able to input your date of ///" << "\n";
	cout << "/// birth and the current date to calculate how long you   ///" << "\n";
	cout << "/// have been alive for in amount of days and how long you ///" << "\n";
	cout << "/// have slept for in your life time. Please enjoy this    ///" << "\n";
	cout << "/// easy calculator and use it to your liking.             ///" << "\n";
	cout << "///                                                        ///" << "\n";
	cout << "///                                                        ///" << "\n";
	cout << "///                 Press enter to continue...             ///" << "\n";
	cout << "//////////////////////////////////////////////////////////////" << "\n";
	cin.get();
	system("CLS");

	// Getting Main loop
	while (ans == 'Y' || ans == 'y') {
		// Getting users date of birth
		cout << "Enter birth month (mm): ";
		cin >> month;
		cout << "\n" << "Month entered: " << month << "\n\n";
		cin.get();
		cout << "Enter birth day (dd): ";
		cin >> day;
		cout << "\n" << "You entered: " << day << "\n\n";
		cin.get();
		cout << "Enter birth year (yyyy): ";
		cin >> year;
		cout << "\n" << "Year entered: " << year << "\n\n";
		cin.get();
		cout << "Your date of birth is " << month << "/" << day << "/" << year << ".\n\n";
		cout << "Press enter to continue...";
		cin.get();
		system("CLS");

		// Getting user to imput todays date
		cout << "Enter current month (mm): ";
		cin >> month1;
		cout << "\n" << "Month entered: " << month1 << "\n\n";
		cin.get();
		cout << "Enter current day (dd): ";
		cin >> day1;
		cout << "\n" << "You entered: " << day1 << "\n\n";
		cin.get();
		cout << "Enter current year (yyyy): ";
		cin >> year1;
		cout << "\n" << "Year entered: " << year1 << "\n\n";
		cin.get();
		cout << "Todays date is " << month1 << "/" << day1 << "/" << year1 << ".\n\n";
		cout << "Press enter to continue...";
		cin.get();
		system("CLS");
		
		// Equation for converting Gregorian calendar to Julian calendar (Sourced from Wikipedia)
		juldayold = (1461 * (year + 4800 + (month - 14) / 12)) / 4 + (367 * (month - 2 - 12 * ((month - 14) / 12))) / 12 - (3 * ((year + 4900 + (month - 14) / 12) / 100)) / 4 + day - 32075;
		juldaynew = (1461 * (year1 + 4800 + (month1 - 14) / 12)) / 4 + (367 * (month1 - 2 - 12 * ((month1 - 14) / 12))) / 12 - (3 * ((year1 + 4900 + (month1 - 14) / 12) / 100)) / 4 + day1 - 32075;

		// Outputs the days lived and hours slept
		cout << "You have lived for " << juldaynew - juldayold << " days." << "\n\n";
		cout << "You have slept for " << (juldaynew - juldayold) * 8 << " hours." << "\n\n";

		// Asking user if they would want to redue the program
		cout << "Would you like to do this program over again? (Y/N)" << "\n\n";
		cin >> ans;
		if (ans == 'Y' || ans == 'y') 
			system("CLS");
	}
	cout << "\nThank you for using this program.\n";

	return 0;
}