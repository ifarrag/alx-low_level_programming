#include "main.h"
#include <stdio.h>
/**
 * read_textfile - read a text file and print to stdout
 * @filename: The text file
 * @letters: Number of lettres to read
 * Return: Number of letters successfuly printed or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fptr;
	int c = 0;
	unsigned long int i = 0;

	if (filename == NULL)
		return (0);

	fptr = fopen(filename, "r");
	while ((c = fgetc(fptr)) != EOF && i <= letters)
	{
		i ++;
		_putchar(c);
	}
	fclose(fptr);
	return (i);
}
