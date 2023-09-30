#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: The numper to check
 * Return: 0 OR 1 OR -1 (success)
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
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
