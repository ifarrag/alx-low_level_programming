#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 **/
int main(void)
{

unsigned short int x1, x2, x3, x4;

for (x1 = 48; x1 <= 57; x1++)
{
	for (x2 = 48; x2 <= 57; x2++)
	{
		x4 = x2 + 1;
		x3 = x1;
	for (; x3 <= 57; x3++)
	{
	for (; x4 <= 57; x4++)
	{
		putchar(x1);
		putchar(x2);
		putchar(32);
		putchar(x3);
		putchar(x4);

		if (x1 != 9 || x2 != 9)
		{
		putchar(',');
		putchar(32);
		}
	}
	x4 = 48;
	}
	}
}
	putchar('\n');
return (0);
}
