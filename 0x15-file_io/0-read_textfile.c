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
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}
