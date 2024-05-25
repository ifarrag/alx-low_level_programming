#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print strings with a separator
 * @separator: The separator between strings
 * @n: number of strings to print
 * @...: unfixed parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ptr;
	char *str;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char*);
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
			printf("(nil)");
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	va_end(ptr);
	printf("\n");
}
