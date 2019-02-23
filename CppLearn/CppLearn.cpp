// CppLearn.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int i; 
	setlocale(0, "");
	int mas[] = { 1,5,4,3,3 };
	int dob = 1;
	for (i = 0; i < 5; i++) 
	{
		dob = dob * mas[i];
	}
	cout << "Dob: " << dob << endl;
	return 0;
}
