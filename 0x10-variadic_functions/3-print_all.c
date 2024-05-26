#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: string of types
 */
void print_char(va_list ptr)
{
	printf("%c", va_arg(ptr, char));
}
void print_string(va_list ptr)
{
	char *str = va_arg(ptr, char*);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
void print_int(va_list ptr)
{
	printf("%d", va_arg(ptr, int));
}
void print_float(va_list ptr)
{
	printf("%f", va_arg(ptr, float));
}
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char arr[] = {c, s, i, f};
	va_list ptr;
	void (*fun[])() = {print_char, print_string, print_int, print_float};

	va_start(ptr, format);
	while (format != NULL)
	{
		while (i < 4)
		{
			if (*format == arr[i])
			{
				(*fun[i])();
			}
			i++;
		}
		format++;
	}
}
