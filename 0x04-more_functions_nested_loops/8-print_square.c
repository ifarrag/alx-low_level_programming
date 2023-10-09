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
		while (n1 <= size)
		{
			while (n2 <= size)
			{
				n2++;
				_putchar('#');
			}
			n1++
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
