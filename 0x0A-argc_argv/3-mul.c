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
	int mul = 0, num1 = 0, num2 = 0, i = 0, sign = 1, mul_1, x = 1;

	if (argc == 3)
	{
		while (argv[1][i] != '\0')
		{
			num1 *= 10;
			num1 = num1 + (argv[1][i] - 48);
			i++;
		}
		i = 0;
		while (argv[2][i] != '\0')
		{
			num2 *= 10;
			num2 = num2 + (argv[2][i] - 48);
			i++;
		}
		mul = num1 * num2;
		if (mul < 0)
		{
			sign = -1;
			mul = -mul;
		}
		if (sign == -1)
			_putchar('-');
		mul_1 = mul;
		while (mul_1 > 9)
		{
			mul_1 = mul_1 / 10;
			x = x * 10;
		}
		while (x >= 1)
		{
			mul_1 = mul / x;
			_putchar((mul_1 % 10) + 48);
			x /= 10;
		}
		_putchar('\n');
		return (0);
	}
	else
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (1);
	}

}
