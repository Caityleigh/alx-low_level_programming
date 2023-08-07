#include "main.h"

/**
 * read_textfile - A function that reads and prints it to our
 * standard output.
 *
 * @filename: Pointer to file's name.
 * @letters: The number of letters that the function reads and prints.
 *
 * Return: 0 if function fails or filename = NULL, otherwise 0/w.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff = malloc(sizeof(char) * letters);
	ssize_t r, o, w;

	if (filename == NULL || buff)
	{
		return (0);
	}

	r = read(o, buff, letters);
	w = write(STDOUT_FILENO, buff, r);
	o = open(filename, O_RDONLY);

	if (r == -1 || o == -1 || w == -1 || w != r)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(o);


	return (w);
}

