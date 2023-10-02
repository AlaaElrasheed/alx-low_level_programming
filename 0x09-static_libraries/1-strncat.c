#include "main.h"

/**
 * _strncat  - the main function
 *
 * @dest: Function value
 *
 * @n: Function value
 *
 * @src: Function value
 *
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int l, m;

	l = 0;
	m = 0;

	while (dest[l] != '\0')
	{
		l++;
	}

	while (m < n && src[m] != '\0')
	{
		dest[l] = src[m];
		l++;
		m++;
	}
		dest[l] = '\0';
		return (dest);
}

