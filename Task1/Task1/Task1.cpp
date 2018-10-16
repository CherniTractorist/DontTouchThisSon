// Task1.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <stdio.h>
#include <iostream>

int rec(int a, int b)
{
	int x;
	if (a == 1 || b == 1)
		return 1;
	else if (a < b)
	{
		x = rec(a, a);
		return x;
	}
	else if (a == b)
	{
		x = rec(a, a - 1) + 1;
		return x;
	}
	else if (a > b)
	{
		x = rec(a, b - 1) + rec(a - b, b);
		return x;
	}

}

int main(void)
{
	int x, y;
	std::cout << "This is the presentation of recursion program!" << std::endl;
	std::cout << "Enter the number for splitting..." << std::endl;
	std::cin >> x;
	std::cout << "Enter splitting limit..." << std::endl;
	std::cin >> y;
	int a = rec(x, y);
	std::cout << "The number of splittings is " << a << "." << std::endl;
	system("pause");
	return 0;
}

