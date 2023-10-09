#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 **/

void print_triangle(int size)
{
	int n1, n2, n3 = 1;

	if (size > 0)
	{
		while (n3 <= size)
		{
			n1 = size - n3;
			while (n1 > 0)
			{
				n1--;
				_putchar(32);
			}
			n2 = 1;
			while (n2 <= n3 && n2 > 0)
			{
				_putchar('#');
				n2++;
			}
			_putchar(10);
			n3++;
		}
	}
	else
	{
		_putchar(10);
	}
}
