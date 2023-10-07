#include <stdlib.h>
#include "main.h"

/**
  * _memset - Entrey point
  *
  * @b: The value used to fill the memory
  *
  * @s: input deal with the function
  *
  * @n: input deal with the function
  *
  * Return: s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int y;

	for (y = 0; y < n; y++)
	s[y] = b;
	return (s);
}


/**
 * _calloc - Entry point
 *
 * @nmemb: number of elements
 *
 * @size: size of elements
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;

	if (size == 0 || nmemb == 0)
		return (NULL);
	a = malloc(size * nmemb);
	if (a == NULL)
		return (NULL);

	_memset(a, 0, size * nmemb);
	return (a);
}
