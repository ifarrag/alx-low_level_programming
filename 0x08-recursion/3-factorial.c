#include "main.h"
/**
 * factorial - factorial of a given number
 * @n: int num
 * Return: factorial of a given number
 */
int factorial(int n)
{
	int sum = 1;

	if (n == 0 || n == 1)
		return (sum);
	if (n < 0)
		return (-sum);

	sum = n * factorial(n - 1);
	return (sum);
}
