#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned short int x = 0;

	do {
		printf("&d", x);
	} while (x <= 9);
	printf("\n");
return (0);
}
