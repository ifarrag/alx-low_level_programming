/**
 * int_index - Search for an int
 * @array: Search from here
 * @size: Size of array
 * @cmp: execute with index if found
 * Return: index or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, r;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		r = cmp(array[i]);
		if (r == 1)
			return (i);
	}
	return (-1);
}
