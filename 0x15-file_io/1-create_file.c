#include "main.h"
#include <stdio.h>
/**
 * create_file - Create a new file
 * @filename: The file title
 * @text_content: content of the new file
 * Return: 1 on Success or -1
 */
int create_file(const char *filename, char *text_content)
{
	FILE *fptr;

	if (filename == NULL)
		return (-1);
	fptr = fopen(filename, "r+");
	if (fptr == NULL)
		return (-1);
	while (text_content != NULL && *text_content != NULL)
	{
		fprintf(fptr, "%s", text_content);
	}
	return (1);
}
