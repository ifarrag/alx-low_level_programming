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
	char **str;
	unsigned int a, b;

	str = malloc(sizeof(char) * 2 * ac + sizeof(char));
	if (!str)
		return ('\0');
	for (a = 0; a <= ac; a++)
	{
		for (b = 0; b != '\0'; b++)
		{
			str[a][b] = av[a][b];
		}
		str[a][b] = '\0';
		str[a][++b] = '\n';

	}
	return (str);
}
