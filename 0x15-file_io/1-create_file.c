#include "main.h"

/**
 * create_file - Entry point
 *
 * @text_content: function parameter
 * @filename: function parameter
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, longi = 0;


	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
	for (longi = 0; text_content[longi];)
		longi++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, longi);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);

}
