#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 **/
int main(void)
{
	unsigned short int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x);
	}
	for (x = 97; x <= 102; x++)
	{
		putchar(x);
	}
	putchar('\n');
return (0);
}
