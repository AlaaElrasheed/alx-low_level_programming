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
	unsigned int k, r, length1, length2;

	while (s1 && s1[length1])
		length1++;
	while (s2 && s2[length2])
		length2++;

	if (n < length2)
		str = malloc(sizeof(char) * (length1 + n + 1));
	else
		str = malloc(sizeof(char) * (length1 + length2 + 1));

	if (str != 0)
		return (NULL);

	while (k < length1)
	{
		str[k] = s1[k];
		k++;
	}
	while (n < length2 && k < (length1 + n))
		str[k++] = s2[r++];
	while (n >= length2 && k < (length1 + length2))
		str[k++] = s2[r++];

	str[k] = '\0';

	return (str);
}
