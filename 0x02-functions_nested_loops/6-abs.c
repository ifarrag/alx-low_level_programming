#include "main.h"
/**
 * _abs - prints the absolute number
 * @n: The numper to check
 * Return: 0 (success)
 **/
int _abs(int n)
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
