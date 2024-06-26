/**
 * clear_bit - Set specific bit to 0
 * @n: Pointer to number
 * @index: Number of the bit count from 0
 * Return: 1 on Success or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;

	if (index > 512)
		return (-1);
	if ((*n >> index & 1) == 1)
	{
		num = num << index ^ *n;
		*n = num;
	}
	return (1);
}
