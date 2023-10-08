#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"


/**
 * is_digit - Entry point
 *
 * @s: string
 *
 * Return: 0
 */

int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 *
 * @s: string
 *
 * Return: length
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}

/**
 * errors - handles errors for main
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *str1, *str2;
	int leng1, leng2, leng, u, lol, dig1, dig2, *final, j = 0;

	str1 = argv[1], str2 = argv[2];
	if (argc != 3 || !is_digit(str1) || !is_digit(str2))
		errors();
	leng1 = _strlen(str1);
	leng2 = _strlen(str2);
	leng = leng1 + leng2 + 1;
	final = malloc(sizeof(int) * leng);
	if (!final)
		return (1);
	for (u = 0; u <= leng1 + leng2; u++)
		final[u] = 0;
	for (leng1 = leng1 - 1; leng1 >= 0; leng1--)
	{
		dig1 = str1[leng1] - '0';
		lol = 0;
		for (leng2 = _strlen(str2) - 1; leng2 >= 0; leng2--)
		{
			dig2 = str2[leng2] - '0';
			lol += final[leng1 + leng2 + 1] + (dig1 * dig2);
			final[leng1 + leng2 + 1] = lol % 10;
			lol /= 10;
		}
		if (lol > 0)
			final[leng1 + leng2 + 1] += lol;
	}
	for (u = 0; u < leng - 1; u++)
	{
		if (final[u])
			j = 1;
		if (j)
			_putchar(final[u] + '0');
	}
	if (!j)
		_putchar('0');
	_putchar('\n');
	free(final);
	return (0);
}
