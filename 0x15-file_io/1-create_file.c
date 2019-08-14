#include "holberton.h"
/**
 * create_file - Create a file
 * @filename: Name of file to create
 * @text_content: String to put inside file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
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
	close (fd);
	return (1);
}
