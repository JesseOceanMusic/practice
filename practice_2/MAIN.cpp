#include "MAIN.h"

int main()
{
	int input_number;
	for (;;)
	{
		std::cout << std::endl;
		std::cout << "   Options:" << std::endl;
		std::cout << "1 : border" << std::endl;
		std::cout << "2 : fizzbuzz" << std::endl;
		std::cout << "3 : compare" << std::endl;
		std::cout << "4 : sum" << std::endl;
		std::cout << "5 : matrix" << std::endl;

		
		std::cout << "\nChoose number: ";
		std::cin >> input_number;

		switch (input_number)
		{
			case 1:
				ini_border();
				break;

			case 2:
				ini_fizzbuzz();
				break;

			case 3:
				ini_compare();
				break;

			case 4:
				ini_sum();
				break;

			case 5:
				ini_matrix();
				break;
		}
	}
}
