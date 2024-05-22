#include <stdio.h>
/**
 * print_name - Print A Name
 * @name: The name
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (*f == NULL)
		return;
	f(name);
}
