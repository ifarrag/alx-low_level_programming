#include "main.h"
/**
 * _isalpha - Checks if the parameter is an alphabetic character
 * @c: The char to check
 * Return: 0 OR 1 (success)
 **/
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
