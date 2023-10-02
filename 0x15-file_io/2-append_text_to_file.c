#include "main.h"

/**
 * append_text_to_file - create a file with specific permission
 * @filename: Input the name of the file
 * @text_content:This will contain the file content
 *
 * Return: 1 if the file is succesful -1 if the file is not successful
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
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
