// CppLearn.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int i; // счетчик цикла
	int sum = 0; // сумма чисел от 1 до 1000.
	setlocale(0, "");
	for (i = 1; i <= 1000; i++) // задаем начальное значение 1, конечное 1000 и задаем шаг цикла - 1.
	{
		sum = sum + i;
	}
	cout << "Сумма чисел от 1 до 1000 = " << sum << endl;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
