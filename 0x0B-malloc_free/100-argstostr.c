#include <stdlib.h>
#include <stdio.h>
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
	int a, b;

	if (!ac)
	{
		return ('\0');
	}

	str = (char *) malloc(sizeof(**av) * sizeof(char));
	if (str == NULL)
		return ('\0');
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			*str = av[a][b];
			str++;
		}
		*str = '\n';

	}
	return (str);
}
