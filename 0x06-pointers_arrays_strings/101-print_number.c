#include "main.h"
/**
 * print_number - prints an integer
 * @n: Integer to putchar
 */
void print_number(int n)
{
	int num = n, i = 0, ins;
	char str;

	while (n != 0)
	{
		n = n / 10;
		i++;
	}

	if (num < 0)
		_putchar('-');

	while (i > 0)
	{
		i--;
		ins = (num / (10 ^ i)) % 10;
		str = |ins| + 48;
		_putchar(str);
	}

}
