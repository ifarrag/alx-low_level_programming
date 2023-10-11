#include <stdio.h>
#include <math.h>
#include <stdbool.h>
/**
 * main - Entry point
 * Return: 0 Always
 **/
int main(void)
{
	int natural, prime;
	unsigned long int n = 612852475143;

	for (natural = 3; natural <= sqrt(n); natural++)
	{
		int isprime = true;

		for (prime = natural - 1; prime > 1; prime--)
		{
			if (natural % prime == 0)
			{
				isprime = false;
			}
		}
			while (isprime)
			{
				if (n % prime == 0)
				{
					n = n / prime;
				}
				else
				{
					isprime = false;
				}
			}
	}
	printf("%lu\n", n);
	return (0);
}
