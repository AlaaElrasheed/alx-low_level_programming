#include <stdio.h>
#include "main.h"

/**
 * _atoi - Entrey point
 *
 * @s; string
 *
 * Return: 0 success , non-zero fail
 */

int _atoi(char *s)
{
	int w, q, r, n, length, digit;

	w = 0;
	q = 0;
	r = 0;
	length = 0;
	digit = 0;

	while (s[length] != '\0')
		length++;

	while (w < length && r == 0)
	{
		if (s[w] == '-')
			++q;

		if (s[w] >= '0' && s[w] <= '9')
		{
			digit = s[w] - '0';
			if (q % 2)
				digit = -digit;
			n = n * 10 + digit;
			r = 1;
			if (s[w + 1] < '0' || s[w + 1] > '9')
				break;
			r = 0;
		}
		w++;
	}
	if (r == 0)
	{
		return (0);
	}

	return (n);
}


/**
 * main - Entry point
 *
 * @argc: No of arguments
 *
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int result, no1, no2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	no1 = _atoi(argv[1]);
	no2 = _atoi(argv[2]);
	result = no1 * no2;

	printf("%d\n", result);

	return (0);
}
