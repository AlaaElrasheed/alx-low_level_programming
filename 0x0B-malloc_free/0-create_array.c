#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of char
 *
 * @size: size of array
 *
 * @c: the char
 *
 * Description: create array of size size and assign char c
 *
 * Return: pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *a = malloc(size);

	if (size == 0 || a == NULL)
		return (NULL);
	while (size--)
		a[size] = c;

	return (a);
}
