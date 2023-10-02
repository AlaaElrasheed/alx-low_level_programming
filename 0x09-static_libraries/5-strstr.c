#include "main.h"

/**
  * _strstr - main function
  *
  * @needle: function parameter
  *
  * @haystack: function parameter
  *
  * Return: Always 0.
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *q = haystack;
	char *w = needle;

	while (*q == *w && *w != '\0')
	{
	q++;
	w++;
	}
	if (*w == '\0')
		return (haystack);
	}
		return (0);
}
