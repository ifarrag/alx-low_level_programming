#include "main.h"
/**
 * jack_bauer - Prints every minute of the day
 **/
void jack_bauer(void)
{
	unsigned short int M1, M2, H1, H2, End;

	{
		End = 0;

		for (H1 = 48; H1 <= 51; H1++)
		{

		for (H2 = 48; H2 <= 57; H2++)
		{
		if (End == 0)
		{

		for (M1 = 48; M1 <= 54; M1++)
		{

		for (M2 = 48; M2 <= 57; M2++)
		{

		_putchar(M1);

		_putchar(M2);

		_putchar(':');

		_putchar(S1);

		_putchar(S2);
		
		_putchar('\n');

		if (H1 ==2 && H2==3 && M1 == 5 && M2 == 9)
		{
		 End = 1;
		}

		}

		}

		}

		}

		}
