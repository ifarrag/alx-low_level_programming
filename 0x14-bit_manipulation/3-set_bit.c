#include <stdio.h>
/**
 * set_bit - Set specific bit to 1
 * @n: pointer to integer to set 1
 * @index: The number of bit
 * Return: 1 on success or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 0;

	if (index > 512)
		return (-1);
	num = *n >> index | 1 << index | *n;
	*n = num;
	return (1);
}
