#include "main.h"
/**
 * main - prints all arguments
 * @argc: number of command line arguments
 * @argv: string of command line arguments
 * Return: (0)
 *
 */
int main(int argc, char **argv)
{
	int i, s = 0;

	while (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (s = 0; argv[i][s] != '\0'; s++)
			{
				_putchar(argv[i][s]);
			}
			_putchar('\n');
		}
	argc--;
	}
	return (0);
}
