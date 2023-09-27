#include "main.h"
/**
 * print_alphabet - Print the alphabet, in lowercase
 * Return: Always (0) Success
 **/

void print_alphabet(void)
{
	unsigned short int x;

	for (x = 97; x <= 122; x++)
	{
		_putchar(x);
	}
	_putchar('\n');

	return;
}
