#include "main.h"
/**
 * times_table - Prints the 9 times table
 **/
void times_table(void)
{
	int raw, colm, coxr;

	for (raw = 0; raw <= 9; raw++)
	{
		for (colm = 0; colm <= 9; colm++)
		{
		coxr = raw * colm;;

		if (coxr > 9)
		{
		_putchar(coxr / 10 + '0'), _putchar(coxr % 10 + '0');
		}
		else
		{
		_putchar(coxr);
		}
		if (colm == 9)
		{
		_putchar('$');
		_putchar('\n');
		}
		else
		{
		_putchar(',');
		_putchar(32);
		}

		}
	}
}
