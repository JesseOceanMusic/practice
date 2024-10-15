#include "matrix.h"

int matrix_size = 0;
int** matrix_array;
int counter;

void forward(bool bool_counter)
{
	if (bool_counter == true)
	{
		counter = 0;
	}

	for (int i = 0; i < matrix_size; i++)
	{
		for (int k = 0; k < matrix_size; k++)
		{
			if (bool_counter == true)
			{
				matrix_array[k][i] = counter++;
			}			
			std::cout << matrix_array[k][i] << "\t";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;
}

void backward()
{
	counter = (matrix_size * matrix_size) - 1;
	for (int i = matrix_size - 1; i >  -1; i--)
	{
		for (int k = matrix_size - 1; k > -1; k--)
		{
			matrix_array[k][i] = counter--;
			std::cout << matrix_array[k][i] << "\t";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;
}

void zigzag()
{
	counter = 0;

	for (int y = 0; y < matrix_size; y++)
	{
		int yy = y;
		for (int x = 0; x < y + 1; x++)
		{
			matrix_array[x][yy] = counter++;
			yy--;
		}
	}
	
	for (int x = 1; x < matrix_size; x++)
	{
		int xx = x;
		for (int y = matrix_size - 1; y > x - 1; y--)
		{
			matrix_array[xx][y] = counter++;
			xx++;
		}
	}
}

void go_down()
{

}

void ini_matrix()
{
	std::cout << "   Enter matrix size: ";
	std::cin >> matrix_size;


	matrix_array = new int* [matrix_size];
	for (int i = 0; i < matrix_size; i++)
	{
		matrix_array[i] = new int[matrix_size];
	}

	std::cout << std::endl;
	std::cout << "   Forward!" << std::endl;
	forward(true);

	std::cout << "   Backward!" << std::endl;
	backward();

	std::cout << "   Zigzag!" << std::endl;
	zigzag();
	forward(false);

}