#include "main.h"
/**
 * print_number - prints an integer
 * @n: Integer to putchar
 */
void print_number(int n)
{
	int num = n, i = 0;
	char str;

	while (num != 0)
	{
		num = num / 10;
		i++;
	}
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;

	}
	if (i <= 1)
		_putchar(n + '0');

	while (i > 1)
	{
		--i;
		str = (n / (10 ^ i)) % 10;
		_putchar(str + '0');
	}

}
