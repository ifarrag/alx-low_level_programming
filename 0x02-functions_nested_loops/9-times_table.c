#include "main.h"
/**
 * times_table - Prints the 9 times table
 **/
void times_table(void)
{
	int raw, col, comp;

	for (raw = 48; raw <= 57; raw++)
	{
	for (col = 48; col <= 57; col++)
	{

	comp = raw * col;
	if (col == 57)
	{
	_putchar(comp);
	_putchar('$');
	_putchar('\n');
	}
	else
	{
	_putchar(comp);
	_putchar(',');
	_putchar(' ');
	}

	}
	}
}
