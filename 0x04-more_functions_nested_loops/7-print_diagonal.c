#include "main.h"

/**
 * print_diagonal - Diagonal line
 * @n: number of times
 **/

void print_diagonal(int n)
{
	unsigned short int count, i;

	if (n > 0)
	{
		if (n > 1)
		{
			i = 1;

			_putchar('\\'), _putchar(10);

			for (; n >= 2; n--)
			{
				for (count = 0; count < i; count++)
				{
					_putchar(32);
				}

				_putchar('\\'), _putchar(10);
				++i;
			}
		}
		else
		{
			_putchar('\\'), _putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
