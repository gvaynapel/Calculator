#include "stdafx.h"
#include <iostream>
#include <Windows.h>
int start();
int main()
{
	using std::cout;
	using std::endl;
	using std::cin;
	cout << "Welcome to My Calculator App! (V.1)" << endl;
	Sleep(1000);
	int x = 0;
	int a; //  holds inputs
	int b; // holds inputs
	while (x <= 6)
	{
		x = start();
		if (x == 1) {
			cout << "Enter Value one" << endl;
			cin >> a;
			cout << "Enter Value two" << endl;
			cin >> b;
			cout << "Your Answer is:" << a + b << endl;
			Sleep(1000);
		}
		if (x == 2) {
			cout << "Enter Value one" << endl;
			cin >> a;
			cout << "Enter Value two" << endl;
			cin >> b;
			cout << "Your Answer is:" << a - b << endl;
			Sleep(1000);
		}
		if (x == 3) {
			cout << "Enter Value one" << endl;
			cin >> a;
			cout << "Enter Value two" << endl;
			cin >> b;
			cout << "Your Answer is:" << a * b << endl;
			Sleep(1000);
		}
		if (x == 4) {
			cout << "Enter Value one" << endl;
			cin >> a;
			cout << "Enter Value two" << endl;
			cin >> b;
			cout << "Your Answer is:" << a / b << endl;
			Sleep(1000);
		}
		if (x == 5) {
			cout << "Enter Value to be square rooted" << endl;
			cin >> a;
			cout << "Your Answer is:" << std::sqrt(a) << endl;
			Sleep(1000);
		}
		if (x == 6) {
			cout << "Enter Value" << endl;
			cin >> a;
			cout << "Enter the value of what power you wish to do" << endl;
			cin >> b; 
			cout << "Your Answer is:" << std::pow(a,b) << endl;
			Sleep(1000);
		}
	}
	return 0;
}