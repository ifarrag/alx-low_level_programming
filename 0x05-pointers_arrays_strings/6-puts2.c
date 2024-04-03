#include <string.h>
#include "main.h"
/**
 * puts2 - prints every other character
 * @str : pointer to string
 */
void puts2(char *str)
{
	int i = 0, len = strlen(str);

	while (i < len / 2)
	{
		_putchar(*str);
		str = str + 2;
		i++;
	}
	_putchar('\n');
}
