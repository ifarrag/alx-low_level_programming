#include "main.h"
/**
 * main - print argc - 1
 * @argc: number of command line arguments
 * @argv: unused variable
 * Return: (0)
 */
int main(int argc, char **argv __attribute__((unused)))
{
	_putchar((argc - 1) + 48);
	_putchar('\n');
	return (0);
}
