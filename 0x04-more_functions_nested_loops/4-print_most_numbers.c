#include "main.h"

/**
 * print_most_numbers - prints the numbers but 2,4
 **/

void print_most_numbers(void)
{
	unsigned short int num;

	for (num = 0; num <=9; num++)
	{
		if (num != 2 && num != 4)
		{
			_putchar(num + '0');
		}
	}
}
