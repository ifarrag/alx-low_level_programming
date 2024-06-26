#include "main.h"
#include <unistd.h>
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
	unsigned char c;
	int x = 0;
	unsigned long int i = 0;

	if (filename == NULL)
		return (0);

	fptr = fopen(filename, "r");
	if (fptr == NULL)
		return (0);
	while ((x = fgetc(fptr)) != EOF && i < letters)
	{
		c = (char)x;
		i++;
		write(STDOUT_FILENO, &c, 1);
	}
	fclose(fptr);
	return (i);
}
