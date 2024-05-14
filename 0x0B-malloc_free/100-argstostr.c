#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates all the arguments
 * @ac: The number of command line arg
 * @av: string of command line arg
 * Return: Pointer to string of args
 * *
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int a, b;
	unsigned long int avx = 0;

	if (!ac)
	{
		return ((char *) avx);
	}

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			avx++;
		}
	}

	str = malloc(sizeof(char) * (avx + ac * 2));
	if (str == NULL)
		return ('\0');
	avx = 0;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			str[avx] = av[a][b];
			avx++;
		}
		str[avx] = '\0';
		avx++;
		str[avx] = '\n';
	}
	str[avx++]  = '\0';

	return (str);
}
