#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include <string>
#include "functions.h"
int start() {
	using std::cout;
	using std::endl;
	using std::cin;
	int a;
	system("CLS");
	cout << "What would you like to do?" << endl;
	cout << "|--------------------------------------------------|" << endl;
	cout << "| 1|  ADD                                          |" << endl;
	cout << "| 2|  Subtract                                     |" << endl;
	cout << "| 3|  MULTIPLY                                     |" << endl;
	cout << "| 4|  Divide                                       |" << endl;
	cout << "| 5|  Square Root                                  |" << endl;
	cout << "| 6|  Take something to the Power of something     |" << endl;
	cout << "| 7|  Factorial                                    |" << endl;
	cout << "| 8|  Exit                                         |" << endl;
	cout << "|--------------------------------------------------|" << endl;
	cin >> a;

	if (cin.fail()) // Error Correction if it is not a interger
	{
		fail();
	}

	else if (a > 8) { // Error Correction if it is to big :)
		std::string custommsg;
		numfail(custommsg);
	}
	system("CLS");
	return a;
}

float readnumber() { // take inputes and return them!
	std::cout << "Enter a number:";
	float x;
	std::cin >> x;
	if (std::cin.fail()){
		fail();
		std::cout << "Enter a number:";
		std::cin >> x;
	}
	return x;
}
double power(double c,double d)
{
	return(std::pow(c, d));
}
unsigned long long factorial(unsigned long long a)
{
	return (a == 1 || a == 0) ? 1 : factorial(a - 1) * a;
}
void fail() { // Handles inputs that arent intergers
	system("CLS");
	std::cout << "Error Input invalid" << std::endl;
	std::cin.clear();
	std::cin.ignore(1000, '\n');
	Sleep(2000);
	system("CLS");
}
void numfail(std::string custommsg) { // numbers/other to massive or incorrect
	system("CLS");
	std::cout << "Error Input invalid"  << custommsg << std::endl;
	Sleep(2000);
	system("CLS");
}