#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers to 98
 * @n: number to start from
 **/
void print_to_98(int n)
{
	if (n >= 98)
	{
		for (; n>= 98; n--)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
		}
		_putchar(10);
	}
	else
	{
		for (; n <= 98; n++)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
		}
	}
	_putchar(10);
}
