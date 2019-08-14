#include "holberton.h"
/**
 * append_text_to_file - Append text to end of file
 * @filename: Name of file
 * @text_content: String to put at end of file
 *
 * Return: 1 if success, -1 if failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len] != '\0')
		{
			len++;
		}
		w = write(fd, text_content, len);
		if (w == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
