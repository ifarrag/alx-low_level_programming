#include "main.h"

/**
 * print_square - Prints a square
 * @size: size of square
 **/

void print_square(int size)
{
	int n1, n2;

	if (size > 0)
	{
		for (n1 = 1; n1 <= size; n1++)
		{
			for (n2 = 1; n2 <= size; n2++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
