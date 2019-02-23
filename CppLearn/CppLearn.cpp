// CppLearn.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int i; // счетчик цикла
	setlocale(0, "");
	int mas[] = { 1,5,4,3,3 };
	int dob = 1;
	for (i = 0; i < 5; i++) // задаем начальное значение 1, конечное 1000 и задаем шаг цикла - 1.
	{
		dob = dob * mas[i];
	}
	cout << "Dob: " << dob << endl;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
