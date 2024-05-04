#include "main.h"
/**
 * _sqrt_recursion - square root of a number
 * @n: integer
 * Return: (res) and (-1)
 */
int _sqrt_recursion(int n)
{
	int res = 1;

	if (n > 1)
	{
		res = n / 2;
		if ((res * res) == n)
			return (res);
		return (_sqrt_recursion(n - 1));
	}
	else if (n == 1)
		return (res);
	else if (n == 0)
		return (0 * res);
	else
		return (-res);
}
