#include "main.h"
/**
 * _islower - Checks for lowercase character
 * @c: The character to cheack
 * Return: 0 OR 1 (Success)
 **/
int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
