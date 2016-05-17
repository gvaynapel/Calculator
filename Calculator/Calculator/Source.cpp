#include "stdafx.h"
#include <iostream>
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