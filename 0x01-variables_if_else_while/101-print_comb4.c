#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 **/
int main(void)
{
	unsigned short int x1, x2, x3, xtotal;

	for (x1 = 48; x1 <= 57; x1++)
	{
		for (x2 = 48; x2 <= 57; x2++)
		{
			for (x3 = 48; x3 <= 57; x3++)
			{
				if (!(x1 >= x2 || x2 >= x3))
				{
					xtotal = x1 + x2 + x3;
					putchar(x1);
					putchar(x2);
					putchar(x3);
					if (xtotal != 168)
					{
						putchar(',');
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
return (0);
}
