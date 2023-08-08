#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file & prints it to the POSIX standard output
 * @filename: pointer to a string that contains the name of the file to read
 * @letters: the number of characters to read from the file
 *
 * Return: if the file can not be opened or read, return 0
 *		if filename is NULL return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t x;
	ssize_t y;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	y = read(fd, buf, letters);
	x = write(STDOUT_FILENO, buf, y);

	free(buf);
	close(fd);
	return (x);
}
