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
					count = n -1;

					for (; n > 0; n--)
					{
						for (; count < n; count++)
						{
							if (n > 1)
							{
								_putchar(32);
							}
						}
						_putchar('\\'), _putchar(10);
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
