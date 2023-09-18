#include <stdio.h>
/**
 * main - Entry poin
 * Return: Always 0 (Success)
 **/
int main(void)
{
	unsigned short int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
		if (x != 57)
		{
			putchar(',');
			putchar(32);
		}
	}
	putchar('\n');
return (0);
}
