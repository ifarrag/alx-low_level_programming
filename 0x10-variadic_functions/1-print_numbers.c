#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print numbers with a separator
 * @separator: The separator between numbers
 * @n: number of integers to print
 * @...: unfixed parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ptr;

	if (n == 0)
		return (0);
	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));
		if (separator != NULL && i != (n-1))
			printf("%s", *separator);
	}
	va_end(ptr);
	printf("\n");
}
