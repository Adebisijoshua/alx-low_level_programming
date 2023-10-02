#include "main.h"

/**
* create_file - a file with specified permissions and writes text content to it
* @filename: The name of the file to create.
* @text_content: A NULL terminated string to write to the file (can be NULL).
*
* Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
	int fd, wr;
	mode_t permissions = S_IRUSR | S_IWUSR; /* rw------- */

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, permissions);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		wr = write(fd, text_content, strlen(text_content));

		if (wr == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

