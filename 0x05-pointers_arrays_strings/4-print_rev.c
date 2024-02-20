#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s: pointer to sring
 */
void print_rev(char *s)
{
	char *start = s;

	while (*s)
	{
		s++;
	}
	for (; s >= start; --s)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
