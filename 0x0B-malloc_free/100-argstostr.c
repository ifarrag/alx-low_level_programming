#include "stdlib.h"
/**
 * argstostr - concatenates all the arguments
 * @ac: The number of command line arg
 * @av: string of command line arg
 * Return: Pointer to string of args
 *
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int a, b, avx = 0;

	if (!ac)
	{
		return ('\0');
	}
	for (a = 0; a <= ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			avx++;
		}
		avx++;
	}

	str = malloc(sizeof(char) * avx);
	if (!str)
		return ('\0');
	for (a = 0; a <= ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			str[a][b] = av[a][b];
		}
		str[a][b] = '\0';
		str[a][++b] = '\n';

	}
	return (str);
}
