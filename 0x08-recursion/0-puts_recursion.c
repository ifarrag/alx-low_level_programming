#include "main.h"
/**
 * _puts_recursion - print string followed by \n
 * @s - pointer to char
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return (0);
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);

}