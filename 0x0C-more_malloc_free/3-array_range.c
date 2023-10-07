#include <stdlib.h>
#include "main.h"

/**
 * array_range - Entry point
 *
 * @min: min int
 *
 * @max: max int
 *
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int *p;
	int length, r;

	if (min > max)
		return (NULL);
	length = max - min + 1;
	p = malloc(sizeof(int) * length);
	if (!p)
		return (NULL);
	for (r = 0; min <= max; r++)
		p[r] = min++;
	return (p);
}
