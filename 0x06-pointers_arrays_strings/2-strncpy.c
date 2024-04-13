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
	unsigned int s = 0;

	while (s < n && s <= strlen(dest))
	{
		*dest = *src;
		dest++;
		src++;
		s++;
	}
	dest = dest - s;

	return (dest);
}
