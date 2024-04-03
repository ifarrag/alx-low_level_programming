#include <string.h>
#include "main.h"
/**
 * puts2 - prints every other character
 * @str : pointer to string
 */
void puts2(char *str)
{
	int i, len = strlen(str);

	for (i = 0; i < len - 1; i++)
	{
		_putchar(*str);
		_putchar('\n');
		str = str + 2;
	}
}
