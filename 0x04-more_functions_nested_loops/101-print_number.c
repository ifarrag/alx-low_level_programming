#include "main.h"

/**
 * print_number - Prints an integer
 * @n: An integer
 **/

void print_number(int n)
{
	int t = n, i = 1, res = 0;

	while (t > 10)
	{
		t = t / 10;
		i = i * 10;
	}
	while (t < -10)
	{
		t = t / 10;
		i = i * 10;
	}

	if (res < 0)
	{
		_putchar(45);
		res = (res * -1)
	}
	while (i >= 1)
	{
		res = n / i;

		if (res > 10)
		{
			_putchar(res % 10 + 48);
		}
		else if (res == 10)
		{
			_putchar(49);
			_putchar(48);
		}
		else if (res >= 0 && res < 10)
		{
			_putchar(res + 48);
		}

		i = i / 10;
	}
}
