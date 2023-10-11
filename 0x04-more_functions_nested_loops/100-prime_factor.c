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
	long int n = 204284158381;

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
		if (isprime)
		{
			if (n % prime == 0)
			{
				n = n / prime;
			}
		}
		printf("%lu", n);
	}

	return (0);
}
