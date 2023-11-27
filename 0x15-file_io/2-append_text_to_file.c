#include "main.h"


/**
 * _strlen - function to find the length of a string
 * @str: pointer to string
 *
 * Return: length of the string
 */
size_t _strlen(char *str)
{
	size_t i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}


/**
 * append_text_to_file - Entry point
 * @filename: function parameter
 * @text_content: function paramter
 *
 * Return: 1 on success and -1 on fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t longi;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		longi = write(fd, text_content, _strlen(text_content));

	close(fd);

	if (longi == -1)
		return (-1);
	return (1);

}
