#include "main.h"
#include "string.h"

/**
 * append_text_to_file - unction that appends text at the end of a file.
 * @filename: pointer to file
 * @text_content: letters to add to file
 * Return: 1 or -1 if failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp = 0, st = 0, wr = 0;

	if (!filename)
		return (-1);
	if (!text_content)
	{
		fp = open(filename, O_WRONLY | O_CREAT, 0600);
		return (1);
	}
	fp = open(filename, O_WRONLY | O_APPEND | O_CREAT, 0600);
	if (fp == -1)
		return (-1);
	st = strlen(text_content);
	wr = write(fp, text_content, st);
	if (wr == -1)
		return (0);
	close(fp);
	return (1);
}
