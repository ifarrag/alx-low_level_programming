#include "main.h"

/**
 * more_numbers - Function that prints 10 times the numbers, from 0 to 14
 **/

void more_numbers(void)
{
	unsigned short int n0t14, count;

	for (count = 0; count <= 10; count++)
	{
		for (n0t14 = 0; n0t14 <= 14; n0t14++)
		{
			_putchar(n0t14 + '0');
		}
		_putchar(10);
	}
}
