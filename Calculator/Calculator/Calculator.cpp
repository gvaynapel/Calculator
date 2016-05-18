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
	int a, b; // Holds inputs
	while (x <= 6)
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
			cout << "Your Answer is:" << std::pow(a,b) << endl;
			Sleep(3000);
		}
	}
	return 0;
}