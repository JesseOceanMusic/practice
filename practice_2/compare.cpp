/*��������� ���������, ������� ������� ������ ��� �����.
���� ������ ����� ������ �������, �� ��������� �������� ����� ������.
���� ������ ����� ������ �������, �� ��������� �������� ����� ������.
� ���� ����� �����, ��������� ���������� ��������� ��� ����� �����.*/

#include "compare.h"

int number_1;
int number_2;

void ini_compare()
{
	std::cout << std::endl;

	std::cout << "Enter first number: ";
	std::cin >> number_1;

	std::cout << "Enter second number: ";
	std::cin >> number_2;

	if (number_1 > number_2)
	{
		std::cout << "First number is larger!";
	}

	if (number_2 > number_1)
	{
		std::cout << "Second number is larger!";
	}

	if (number_1 == number_2)
	{
		std::cout << "Numbers are equal!";
	}

	std::cout << std::endl;
}