#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Entry point
 *
 * @s1: function parameter
 *
 * @s2: function parameter
 *
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int y, z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	y = z = 0;
	while (s1[y] != '\0')
		y++;
	while (s2[z] != '\0')
		z++;
	a = malloc(sizeof(char) * (y + z + 1));

	if (a == NULL)
		return (NULL);
	y = z = 0;
	while (s1[y] != '\0')
	{
		a[y] = s1[y];
		y++;
	}
	while (s2[z] != '\0')
	{
		a[y] = s2[z];
		y++, z++;
	}
	a[y] = '\0';
	return (a);
}
