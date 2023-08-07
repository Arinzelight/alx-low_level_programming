#include <stdio.h>
#include <stdlib.h>

/**
 *read_textfile - Read text file and print to STDOUT.
 *@filename: Name of the text file to be read
 *@letters: Number of characters to read and print
 *Return: Number of characters successfully read and printed,
 *or 0 if the function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
