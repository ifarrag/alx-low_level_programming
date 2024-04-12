#include "main.h"

/**
 * print_number - Prints an integer
 * @n: An integer
 **/

void print_number(int n)
{
	int t = n, i = 1, res = 0;

	while (t >= 10)
	{
		t = t / 10;
		i = i * 10;
	}
	while (i >= 1)
	{
		res = n / i;

		if (res > 10)
		{
			_putchar(res % 10 + 48);
		}
		else
			_putchar(res + 48);
		i = i / 10;
	}
}
