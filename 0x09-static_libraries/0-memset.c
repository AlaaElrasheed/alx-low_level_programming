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
