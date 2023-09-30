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
		return (0);
	}
	else if (n > 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
