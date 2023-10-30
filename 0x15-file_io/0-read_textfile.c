#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Entry point
 * @filename: function parameter
 * @letters: function parameter
 *
 * Return: If the function fails or filename is NULL - 0.
 * O/w - the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, w, o;
	char *i;

	if (filename == NULL)
	return (0);

	i = malloc(sizeof(char) * letters);

	if (i == NULL)
	return (0);

	o = open(filename, O_RDONLY);
	r = read(o, i, letters);
	w = write(STDOUT_FILENO, i, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
	free(i);
	return (0);
	}

	free(i);
	close(o);

	return (w);

}
