#pragma once
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

int start();
float readnumber();
double power(double c,double d);
unsigned long long factorial(unsigned long long a);
void fail(); // cin.fail() error handeler
void numfail(std::string custommsg); // interger error catching
#endif // !FUNCTIONS_H