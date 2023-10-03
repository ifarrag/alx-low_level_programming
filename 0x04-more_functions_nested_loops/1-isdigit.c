#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: the digit to check
 * Return: 0 OR 1
 **/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
