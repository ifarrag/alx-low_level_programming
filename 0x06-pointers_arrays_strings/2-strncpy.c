#include <string.h>
#include "main.h"
/**
 * *_strncpy - copies a string
 * @dest: pointer to char
 * @src: pointer to char
 * @n: n bytes to copy from src
 * Return: (dest)_
 */
char *_strncpy(char *dest, char *src, int n)
{
	int s = 0, len_d = strlen(dest), len_s = strlen(src);

	while (s < n && s <= len_d)
	{
		*dest = *src;
		dest++;

		if (s < len_s)
			src++;
		s++;
	}
	dest = dest - s;

	return (dest);
}
