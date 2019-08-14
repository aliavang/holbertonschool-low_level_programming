#include "holberton.h"
/**
 * read_textfile - Read and print text file to stdout
 * @filename: textfile
 * @letters: Number of characters to read and print
 *
 * Return: Number of characters actually read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, w;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buff = malloc(letters + 1);
	if (buff == NULL)
	{
		free(buff);
		return (0);
	}
	r = read(fd, buff, letters);
	if (r == -1)
	{
		free(buff);
		return (0);
	}
	buff[letters] = '\0';
	w = write(STDOUT_FILENO, buff, r);
	if (w == -1)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(fd);
	return (w);
}
