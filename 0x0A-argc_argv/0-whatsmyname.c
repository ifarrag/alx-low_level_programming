#include "main.h"
/**
 * main - Print argv[0]
 * return: (0)
 */
int main(int argc __attribute__((unused)), char **argv)
{
	for (; **argv != 32; argv++)
	{
		_putchar(**argv);
	}

	return (0);
}
