#include "main.h"

/**
  * _memcpy - Entrey point
  *
  * @src: parameter deal with the function
  *
  * @dest: parameter deal with the function
  *
  * @n: parameter deal with the function
  *
  * Return: Copied memory
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int lol;

	for (lol = 0; lol < n; lol++)
	{
	dest[lol] = src[lol];
	}
	return (dest);
}
