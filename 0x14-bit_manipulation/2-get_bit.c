#include "main.h"
/**
 * get_bit - get the value in a bit
 * @n: Integer example
 * @index: Number of the bit
 * Return: The value of the bit or (-1)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int res = 0;

	if (index > (sizeof(n) * 64))
		return (-1);
	res = n >> index & 1;
	return (res);
}
