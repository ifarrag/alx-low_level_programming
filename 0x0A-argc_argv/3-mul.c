#include "main.h"
/**
 * main - multiply two numbers
 * @argc: The number of command line arg
 * @argv: The string of command line arg
 * Return: (0) or (1)
 *
 */
int main(int argc, char **argv)
{
	int mul = 0, num1 = 0, num2 = 0, i = 0, sign = 1;

	if (argc == 3)
	{
		while (argv [1][i] != '\0')
		{
			num1 *= 10;
			num1 = num1 + (argv[1][i] - 48);
			i++;
		}
		i = 0;
		while (argv [2][i] != '\0')
		{
			num2 *= 10;
			num2 = num2 + (argv[2][i] - 48);
			i++;
		}
		mul = num1 * num2;
		if (mul < 0)
		{
			sign = -1;
			mul *= -1;
		}
		if (sign == -1)
			_putchar('-');

		while (mul > 9)
		{
			_putchar((mul % 10) + 48);
			mul /= 10;
		}
		_putchar(mul + 48);
		_putchar('\n')
		return(0);

	}
	else
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return(1);
	}

}
