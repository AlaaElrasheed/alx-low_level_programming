#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: fisrt string to concatenates
 *
 * @s2: second string to concatenates
 *
 * @n: No. of bytes
 *
 * Return: pointer to final string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, l = 0, length1 = 0, length2 = 0;

	while (s1 && s1[length1])
		length1++;
	while (s2 && s2[length2])
		length2++;

	if (n < length2)
		str = malloc(sizeof(char) * (length1 + n + 1));
	else
		str = malloc(sizeof(char) * (length1 + length2 + 1));

	if (!str)
		return (NULL);

	while (i < length1)
	{
		str[i] = s1[i];
		i++;
	}

	while (n < length2 && i < (length1 + n))
		str[i++] = s2[l++];
	while (n >= length2 && i < (length1 + length2))
		str[i++] = s2[l++];

	str[i] = '\0';

	return (str);
}
