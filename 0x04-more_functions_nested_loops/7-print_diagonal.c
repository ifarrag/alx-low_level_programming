#include "main.h"

/**
 * print_diagonal - Diagonal line
 * @n: number of times
 **/

void print_diagonal(int n)
{
	unsigned short int count;

	if (n > 0)
	{
		if (n > 1)
		{
			for (; n > 0; n--)
			{
				for (count = 1; count <= n - 1; count++)
				{
					_putchar(32);
				}
				_putchar('\');
				_putchar(10);
			}
		}
		else
		{
			_putchar('\');
		}

	}
	_putchar(10);
}
