#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
 * append_text_to_file - Add text to the end
 * @filename: The file path
 * @text_content: The text
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0;
	unsigned int str;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		str = strlen(text_content);
		write(fd, text_content, str);
	}
	return (1);
}
