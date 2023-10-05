#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 **/

int main(void)
{
	int n;

	for (n = 0; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 != 0)
		{
			printf("Fizz ");
		}

		else if (n % 3 != 0 && n % 5 == 0)
		{
			printf("Buzz ");
		}


		else if (n % 3 == 0 && n % 5 == 0)
		{
			printf("Fizz Buzz ");
		}
		else
		{
			printf("%d ", n);
		}
	}
		printf("\n");
	return (0);
}
