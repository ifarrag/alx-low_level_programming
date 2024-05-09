#include "main.h"
/**
 * _put_int - print integer as string
 * @num: integer number
 *
 */
void _put_int(int num)
{
	if (num == 0)
		return;
	_put_int(num / 10);
	_putchar((num % 10) + 48);
}
