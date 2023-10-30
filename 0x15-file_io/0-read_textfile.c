#include "main.h"
/**
 * read_textfile - This function is going to create a text of a file
 *             print it to the POSIX standard output
 * @filename: This is the type name of the filename
 * @letters: This is will give the value letters
 * Return: if cannot be read 0, if is NULL 0, Success 1
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fk;
	ssize_t rk, wr;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fk = open(filename, O_RDONLY);
	if (fk == -1)
	{
		free(buf);
		return (0);
	}
	rk = read(fk, buf, letters);
	if (rk == -1)
	{
		free(buf);
		close(fk);
		return (0);
	}
	close(fk);
	wr = write(STDOUT_FILENO, buf, rk);
	if (wr == -1)
	{
		free(buf);
		return (0);
	}
	if (wr != rk)
		return (0);
	return (rk);
}
