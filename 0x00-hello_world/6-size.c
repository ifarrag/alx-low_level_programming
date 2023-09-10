#include <stdio.h>
/**
 * main - Entry point
 * sizeof - Size in memory of the variable or type
 * printf - Print the sizeof value
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned short int c, i, li, lli, fl;

	c = sizeof(char);
	i = sizeof(int);
	li = sizeof(long int);
	lli = sizeof(long long int);
	fl = sizeof(float);
	printf("Size of a char: %hu byte(s)\n", c);
	printf("Size of an int: %hu byte(s)\n", i);
	printf("Size of a long int: %hu byte(s)\n", li);
	printf("Size of a long long int: %hu byte(s)\n", lli);
	printf("Size of a float: %hu byte(s)\n", fl);
	return (0);
}
