#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: int to check
 * Return: 0 OR 1
 **/

int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
