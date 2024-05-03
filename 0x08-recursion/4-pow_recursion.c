#include "main.h"
/**
 * _pow_recursion - value of x powered y
 * @x: The value
 * @y: The power
 * Return: (Res)
 */
int _pow_recursion(int x, int y)
{
	int res = 1;

	if (y > 0)
	{
		y--;
		res = x * _pow_recursion(x, y);
		return (res);
	}
	else if (y == 0)
		return (res);
	else
		return (-res);
}
