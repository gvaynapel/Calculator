#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include "functions.h"
int main()
{
	using std::cout;
	using std::endl;
	using std::cin;
	cout << "Welcome to My Calculator App! (V.1)" << endl;
	Sleep(1000);
	int x(0);
	float a, b; // Holds inputs
	while (x != 8)
	{
		x = start();
		if (x == 1) {
			a = readnumber();
			b = readnumber();
			cout << "Your Answer is:" << a + b << endl;
			Sleep(3000);
		}
		if (x == 2) {
			a = readnumber();
			b = readnumber();
			cout << "Your Answer is:" << a - b << endl;
			Sleep(3000);
		}
		if (x == 3) {
			a = readnumber();
			b = readnumber();
			cout << "Your Answer is:" << a * b << endl;
			Sleep(3000);
		}
		if (x == 4) {
			a = readnumber();
			b = readnumber();
			cout << "Your Answer is:" << a / b << endl;
			Sleep(3000);
		}
		if (x == 5) {
			a = readnumber();
			cout << "Your Answer is:" << std::sqrt(a) << endl;
			Sleep(3000);
		}
		if (x == 6) {
			a = readnumber();
			b = readnumber();
			cout << "Your Answer is:" << std::pow(a, b) << endl;
			Sleep(3000);
		}
		if (x == 7) {
			unsigned long long c; // this is needed to convert from a float to an int!
			a = readnumber();
			c = a; // convert float a to c
			cout << "Your Answer is:" << factorial(c) << endl;
			Sleep(3000);
		}

		if (x > 8) {
			cout << "Error Invalid input :)" << endl;
			Sleep(2000);
			x = NULL;
		}
// WIP FAIL SAFE if value is greater then allowed or a string 

	}
	return 0;
}