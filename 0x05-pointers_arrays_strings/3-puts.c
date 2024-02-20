#include "main.h"
/**
 * _puts - print string followed by a new line
 * @str: pointer to string of chars
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
