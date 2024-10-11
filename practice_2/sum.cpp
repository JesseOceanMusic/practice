#include "sum.h"

void ini_sum()
{
	float inmput_number = 0;
	float calculated = 0;
	for (;;)
	{
		std::cout << "Enter number to get sum or 0 to return: ";
		std::cin >> inmput_number;;

		if (inmput_number == 0)
		{
			return;
		}

		else
		{
			calculated = calculated + inmput_number;
			std::cout << "Result = " << calculated << std::endl;
		}
	}
}