#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - Convret binary to unsigned int
 * @b: string of binarys
 * Return: The Converted binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ech = 0, num = 0, position = 1;

	if (b == NULL || *b == '\0')
		return (0);

	while (b[ech] != '\0')
	{
		ech++;
	}

	for (--ech; ech >= 0; ech--)
	{
		if (b[ech] == 0 || b[ech] == 1)
		{
			num = b[ech] * position;
			position *= 2;
		}
		else
			return (0);
	}
	return (num);
}
