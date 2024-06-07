#include "main.h"
#include <stdio.h>
#include <limits.h>
/**
 * print_binary - convert int to binary and print the result
 * @n: Integer num
 */
void print_binary(unsigned long int n)
{
	unsigned long int max = 1, num = 0;
	int b = 1;

	while (n >= max)
	{
		if (max  == ULONG_MAX || max * 2 > n)
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
			n = n - max;
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
		max = num;
	}
}
