#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int x, y, z;
	z = x + y;

	for (x = 48; x <= 57; x++)
	{
		for (y = 49; y <= 57; y++)
		{
			if (!(x >= y))
			{
				putchar(x);
				putchar(y);
				if (z != 113)
				{
					putchar(',');
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
return (0);
}
