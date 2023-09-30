#include "main.h"
/**
 * print_last_digit - Return the last digit of int
 * @in: Integer to check
 * Return: @in
 **/
int print_last_digit(int in)
{
	int n;

	if (in < 0)
	{
		in = in * -(1);
	}

	n = (int)in % 10;

	_putchar('0' + n);

	return (n);
}
