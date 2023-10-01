#include "main.h"
/**
 * times_table - Prints the 9 times table
 **/
void times_table(void)
{
	int raw, colm, comp;

	for (raw = 0; raw <= 9; raw++)
	{
	for (colm = 0; colm <= 9; colm++)
	{

	comp = colm * raw;

	if (colm == 9)
	{
	_putchar(comp + '0');
	_putchar('$');
	_putchar('\n');
	}

	else
	{
	_putchar(comp + '0');
	_putchar(',');
	_putchar(32);
	}

	}
	}
}
