#include <string.h>
#include "main.h"
/*
 * puts_half - print half of string
 * @str : pointer to string
 */
void puts_half(char *str)
{
	int i = 0, len = strlen(str);

	if (len % 2 == 0)
	{
		while (i < len / 2)
		{
			i++;
			str++;
		}
		while (*str)
		{
			_putchar(*str);
			str++;
		}
		_putchar('\n');
	}
	else
	{
		while (i < (len - 1) / 2)
		{
			i++;
			str++;
		}
		while (*str)
		{
			_putchar(*str);
			str++;
		}
		_putchar('\n');
	}
}
