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
			coxr = raw * colm;

			if (coxr > 9)
			{
			_putchar(coxr / 10 + '0'), _putchar(coxr % 10 + '0');
			}
			else
			{
			_putchar(coxr + '0');
			}

			if (colm < 9 && coxr <= 9)
			{
			_putchar(44), _putchar(32), _putchar(32);
			}
			else if (colm < 9 && coxr > 9)
			{
			_putchar(44), _putchar(32);
			}
		}
		_putchar(10);
	}
}
