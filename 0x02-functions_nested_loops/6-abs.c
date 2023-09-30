#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: The numper to check
 * Return: 0 (success)
 **/
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar(n);
		return (0);
	}
	else
	{
		_putchar(n * -1);
		return (0);
	}
}
