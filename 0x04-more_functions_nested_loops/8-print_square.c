#include "main.h"

/**
 * print_square - Prints a square
 * @size: size of square
 **/

void print_square(int size)
{
	int n;

	if (size > 0)
	{
		while (n < size)
		{
			for (n = 1; n <= size; n++)
			{
				_putchar('#');
			}
			n++;
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
