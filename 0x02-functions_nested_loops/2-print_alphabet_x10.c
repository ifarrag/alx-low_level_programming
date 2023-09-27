#include "main.h"
/***
 * print_alphabet_x10 - Print the alphabet x10
 *
 * Return: Always void (Success)
 ***/

void print_alphabet_x10(void)
{
	unsigned short int w = 0;

	while (w < 10)
	{
		print_alphabet();
		w++;
		_putchar('\n');
	}
}
