#include "main.h"

/**
 * print_number - Prints an integer
 * @n: An integer
 **/

void print_number(int n)
{
	int t = n;

	while (t > 10)
	{
		_putchar(t % 10 + 48);
		t = t / 10;
	}
	_putchar(t + '0');
}
