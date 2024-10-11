/*�������� ���������, ������� ������� �� ����� ����� �� 1 �� 100.
��� ���� ������ �����, ������� ����, ��������� ������ �������� ����� �Fizz�,
� ������ �����, ������� ���� � ����� �Buzz�. ���� ����� ������ � 3, � 5,
�� ��������� ������ �������� ����� �FizzBuzz�.*/

#include "fizzbuzz.h"

void ini_fizzbuzz()
{
	for (int i = 1; i < 101; i++)
	{
		bool fizz_or_buzz = false;

		if (i % 3 == 0)
		{
			std::cout << "Fizz";
			fizz_or_buzz = true;
		}

		if (i % 5 == 0)
		{
			std::cout << "Buzz";
			fizz_or_buzz = true;
		}

		if (fizz_or_buzz == true)
		{
			std::cout << std::endl;
		}

		if (fizz_or_buzz == false)
		{
			std::cout << i << std::endl;
		}
	}
}