#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 **/
int main(void)
{
	unsigned short int x1, x2, x3, x4, x12total, x34total;

	for (x1 = 48; x1 <= 57; x1++)
	{
		for (x2 = 48; x2 <= 57; x2++)
		{

			for (x3 = 48; x3 <= 57; x3++)
			{

				for (x4 = 48; x4 <= 57; x4++)
				{
				x12total = x1 + x2;
				x34total = x3 + x4;
				if (!(x12total >= x34total))
				{
					putchar(x1);
					putchar(x2);
					putchar(32);
					putchar(x3);
					putchar(x4);
					if (!((x12total == 133) && (x34total == 114)))
					{
						putchar(',');
						putchar(32);
					}
				}
				}
			}
		}
	}
	putchar('\n');
return (0);
}
