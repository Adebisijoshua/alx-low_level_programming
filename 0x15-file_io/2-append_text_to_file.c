#include "main.h"

/**
 * append_text_to_file - Create a function that appends
 *       text at the end of a file
 * @filename: The name of the file.
 * @text_content: Value of the content added
 *
 * Return: 1 if it is success. -1 if the it is not
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int nletters;
	int fd;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(fd, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
