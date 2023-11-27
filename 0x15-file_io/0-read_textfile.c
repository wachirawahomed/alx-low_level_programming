#include "main.h"
#include <stdio.h>
/**
 * * read_textfile -  reads a text file and prints it to POSIX standard output.
 * * @filename: the text file being read.
 * * @letters: is the number of letters it should read and print.
 * * Return: the actual number of letters it could read and print.
 * */
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
