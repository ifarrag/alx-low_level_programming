#include "main.h"
/***
 * main - Entry point
 * Return: Always 0 (Success)
 ***/

void print_alphabet_x10(void)
{
	unsigned short int w = 0, f = 97;

	while (w < 10)
	{
		for (; f <= 122; f++)
		{
			_putchar(f);
		}
		++w;
		_putchar('\n');
	}
}
