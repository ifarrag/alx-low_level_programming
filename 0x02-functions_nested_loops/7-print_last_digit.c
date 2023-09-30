#include "main.h"
/**
 * print_last_digit - Return the last digit of int
 * @in: Integer to check
 * Return: @in
 **/
int print_last_digit(int in)
{
	short int n;

	if (in < 0)
	{
		in = in * -1;
	}

	in = in % 10;
	n = in + in * 10
	return (n);
}
