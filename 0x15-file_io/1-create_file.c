#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * create_file - Create a new file
 * @filename: The file title
 * @text_content: content of the new file
 * Return: 1 on Success or -1
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	unsigned long int str = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		str = strlen(text_content);
		write(file, text_content, str);
	}
	return (1);
}
