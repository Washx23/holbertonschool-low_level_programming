#include "main.h"

/**
 * read_textfile - function that reads a text file,
 * and prints it to the POSIX standard output.
 * @filename: pointer to file
 * @letters: letters to print
 * Return: actual number of letters or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fp = 0, rd = 0, wr = 0;

	if (!filename)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (-0);

	buf = malloc(letters + 1);
	if (!buf)
		return (-0);
	rd = read(fp, buf, letters);
	if (rd == -1)
		return (-0);
	buf[letters + 1] = '\0';
	close(fp);

	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1)
		return (-0);
	free(buf);
	return (rd);
}
