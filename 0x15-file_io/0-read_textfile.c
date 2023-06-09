#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads text file and print to STDOUT.
 * @filename: text file to be read
 * @letters: number of letters to be read and print
 * Return: number of letters printed or 0 if it failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t s;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	s = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (s);
}
