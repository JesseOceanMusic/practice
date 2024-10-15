#include "brute_force.h"


void ini_brute_force()
{
	const auto timer_start = std::chrono::high_resolution_clock::now();
	
	std::string password_in;

	std::cout << "Enter password (max length is 2) : ";
	std::cin >> password_in;
	
	bool password_found = false;

	for (int i = 0; i < 256; i++)
	{
		std::string X = std::string() + char(i);
		std::cout << X;
	
		if (password_in == X)
		{
			password_found = true;
			break;
		}
	}

	if (password_found == false)
	{
		for (int i = 0; i < 256; i++)
		{
			for (int k = 0; k < 256; k++)
			{
				std::string X = std::string() + char(i) + char(k);
				std::cout << X;

				if (password_in == X)
				{
					password_found = true;
					break;
				}
			}
		}
	}

	if (password_found == true)
	{
		std::cout << std::endl << std::endl << "PASSWORD IS : " << password_in << std::endl;
	}

	else
	{
		std::cout << std::endl << std::endl << "PASSWORD IS NOT FOUND." << std::endl;
	}


	const auto timer_end = std::chrono::high_resolution_clock::now();

	const std::chrono::duration<double> timer_diff = timer_end - timer_start;

	std::cout << timer_diff << std::endl;
}
