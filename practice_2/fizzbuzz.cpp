/*Напишите программу, которая выводит на экран числа от 1 до 100.
При этом вместо чисел, кратных трем, программа должна выводить слово «Fizz»,
а вместо чисел, кратных пяти — слово «Buzz». Если число кратно и 3, и 5,
то программа должна выводить слово «FizzBuzz».*/

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