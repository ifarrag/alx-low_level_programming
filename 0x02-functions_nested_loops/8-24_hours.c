#include "main.h"
/**
 * jack_bauer - Prints every minute of the day
 **/
void jack_bauer(void)
{
	int h1, h2, m1, m2, end;

	end = 0;
	for (h1 = 48; h1 <= 50; h1++)
	{

	for (h2 = 48; h2 <= 57; h2++)
	{
	if (h1 == 50 && h2 == 52)
	{
	end = 1;
	}

	for (m1 = 48; m1 <= 53; m1++)
	{

	for (m2 = 48; m2 <= 57; m2++)
	{
	if (end == 0)
	{
		_putchar(h1);
		_putchar(h2);
		_putchar(':');
		_putchar(m1);
		_putchar(m2);
		_putchar('\n');
	}
	}
	}
	}
	}
}
