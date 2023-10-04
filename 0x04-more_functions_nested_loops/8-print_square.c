#include "main.h"

/**
 * print_square - Prints a square
 * @size: size of square
 **/

void print_square(int size)
{
	if (size != 0)
	{
		for (; size > 0; size--)
		{
			for (; size > 0; size--)
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
