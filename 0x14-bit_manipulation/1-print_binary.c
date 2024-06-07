#include "main.h"
#include <stdio.h>
/**
 * print_binary - convert int to binary and print the result
 * @n: Integer num
 */
void print_binary(unsigned long int n)
{
	unsigned long int max = 1, b = 1, num = 0;

	while (n > max)
	{
		if (max * 2 > n || max + 1 == 0)
			break;

		max *= 2;
		b++;
	}
	num = max;
	for (; b >= 1; b--)
	{
		if (n >= num)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		num = 1;
		while (num < max)
		{
			if (num * 2 == max)
				break;
			num = num * 2;
		}
		if (n > num)
			n = n - max;
		max = num;
	}
}
