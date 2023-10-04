#include "main.h"

/**
 * print_square - Prints a square
 * @size: size of square
 **/

void print_square(int size)
{
	int n;

	if (size != 0)
	{
		for (n = 1; n <= size; n++)
		{
			for (; n > 0; n++)
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
