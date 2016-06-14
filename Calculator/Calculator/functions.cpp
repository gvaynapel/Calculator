#include "stdafx.h"
#include <iostream>
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
	system("CLS");
	return a;
}
float readnumber() {
	std::cout << "Enter a number:";
	float x;
	std::cin >> x;
	return x;
}
unsigned long long factorial(unsigned long long a)
{
	return (a == 1 || a == 0) ? 1 : factorial(a - 1) * a;
}
