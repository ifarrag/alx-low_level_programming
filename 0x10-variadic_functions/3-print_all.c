#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_all - prints anything
 * @format: string of types
 *
 * print_char - print char
 * @ptr: va_list
 *
 * print_string - print string
 * @ptr: va_list
 *
 * print_int - print int
 * @ptr: va_list
 *
 * print_float - print float
 * @ptr: va_list
 */
void print_char(va_list ptr)
{
	char cc = (char)va_arg(ptr, int);

	printf("%c", cc);
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
	int integer = va_arg(ptr, int);

	printf("%d", integer);
}
void print_float(va_list ptr)
{
	float ff = (float)va_arg(ptr, double);

	printf("%f", ff);
}
void print_all(const char * const format, ...)
{
	unsigned int i = 0, n = 0;
	char arr[] = {'c', 's', 'i', 'f'};
	va_list ptr;
	void (*fun[])(va_list) = {print_char, print_string, print_int, print_float};

	va_start(ptr, format);
	while (format[n] != '\0')
	{
		i = 0;
		while (i < 4)
		{
			if (format[n] == arr[i])
			{
				(*fun[i])(ptr);
				printf(", ");
			}
			i++;
		}
		n++;
	}
	printf("\n");
	va_end(ptr);
}
