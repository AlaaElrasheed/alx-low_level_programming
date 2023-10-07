#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 *
 * @ptr: pointer
 *
 * @old_size: size of the old memory
 *
 * @new_size: new size of the new memory
 *
 * Return: pointer to the newly allocated memory block
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *old_p;
	char *p;
	unsigned int y;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	old_p = ptr;

	if (new_size < old_size)
	{
		for (y = 0; y < new_size; y++)
			p[y] = old_p[y];
	}

	if (new_size > old_size)
	{
		for (y = 0; y < old_size; y++)
			p[y] = old_p[y];
	}

	free(ptr);
	return (p);
}
