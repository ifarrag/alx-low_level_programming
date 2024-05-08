#include "main.h"
/**
 * main - Print argv[0]
 * @argc: unused variable
 * @argv: command line arguments
 * Return: (0)
 */
int main(int argc __attribute__((unused)), char **argv)
{
	int i;

	for (i = 0; argv[0][i] != '\0'; i++)
	{
		_putchar(argv[0][i]);
	}
	_putchar('\n');

	return (0);
}
