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

	for (i = 0; i < argc; i++)
	{
		for (s = 0; argv[i][s] != '\0'; s++)
		{
			_putchar(argv[i][s]);
		}

		_putchar('\n');
	}
	return (0);
}
