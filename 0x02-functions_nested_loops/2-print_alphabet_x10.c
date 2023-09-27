#include "main.h"
/**
 * print_alphabet_x10 - Print the alphabet x10
 *
 * Return: Always void (Success)
 ***/

void print_alphabet_x10(void)
{
	unsigned short int w = 0, f;

	while (w < 10)
	{
		for (f = 97; f <= 122; f++)
		{
			_putchar(f);
		}
		w++;
		_putchar('\n');
	}
}
