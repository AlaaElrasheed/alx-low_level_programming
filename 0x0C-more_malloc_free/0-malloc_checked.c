#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Entry point
 *
 * @b: input value
 *
 * Return: pointer to array
 */

void *malloc_checked(unsigned int b)
{
	int *a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}
