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

	n = in % 10;

	_putchar(n + '0');

	return ((int) n);
}
