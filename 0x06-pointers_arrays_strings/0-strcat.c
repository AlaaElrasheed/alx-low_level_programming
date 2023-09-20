#include "main.h"

/**
 * _strcat - main function of the prototype
 *
 * @src: Concatenation parameter
 *
 * @dest: Concatenation parameter
 *
 * Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int l, m;

	l = 0;
	m = 0;

	while (desk[l] != '\0')
	{
		l++;
	}

	while (src[m] != '\0')
	{
		dest[l] = src[m];
		l++;
		m++;
	}
	dest[l] = '\0';
	return (dest);
}

