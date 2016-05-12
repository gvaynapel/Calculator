#include "stdafx.h"
#include <iostream>
#include <Windows.h>
int start() {
	using std::cout;
	using std::endl;
	using std::cin;
	int a;
	system("CLS");
	cout << "What would you like to do?" << endl;
	cout << "|-------------------|" << endl;
	cout << "| 1|  ADD           |" << endl;
	cout << "| 2|  Subtract      |" << endl;
	cout << "| 3|  MULTIPLY      |" << endl;
	cout << "| 4|  Divide        |" << endl;
	cout << "| 5|  Exit          |" << endl;
	cout << "|-------------------|" << endl;
	cin >> a;
	system("CLS");
	return a;
}
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
	int d; // if user wants to start over
	while (x <= 4)
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
	}
	return 0;
}