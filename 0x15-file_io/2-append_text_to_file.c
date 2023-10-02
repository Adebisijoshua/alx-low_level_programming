#include "main.h"

/**
 * _strlen - pack together the  length of  NULL-terminated string
 * @str: the string to measure
 *
 * Return:length of str, or -1 if str will be NULL
 */
ssize_t _strlen(const char *str)
{
	ssize_t len = 0;

	if (!str)
		return (-1);

	while (*str++)
		++len;

	return (len);
}

/**
 * append_text_to_file - to the end of a file
 * @filename: file name to  the file to append to
 * @text_content: name of the file that will be comprehend to the data
 *
 * Return: if it is not fails return 1. incase it fails, return -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t a_written = 0;

	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd < 0)

		return (-1);

	if (text_content)

		a_written = write(fd, text_content, _strlen(text_content));

	close(fd);

	if (a_written < 0)
		return (-1);
	return (1);
}
