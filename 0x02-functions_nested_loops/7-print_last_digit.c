#include "main.h"
/**
 * print_last_digit - Return the last digit of int
 * @in: Integer to check
 * Return: @in
 **/
int print_last_digit(int in)
{
	if (in < 0)
	{
		in = in * -1;
	}

	in = in % 10;

	_putchar(in + '0');

	return (in);
}
