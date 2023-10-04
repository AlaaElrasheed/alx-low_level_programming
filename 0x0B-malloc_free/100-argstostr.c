#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - Entry point
 *
 * @ac: function input
 *
 * @av: function input
 *
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int i;
	int d = 0;
	int total = 0;
	char *r;

	if (ac <= 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		total += strlen(av[i]) + 1;
	}

	r = (char *)malloc(total * sizeof(char));
	if (r == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		strcpy(r + d, av[i]);
		d += strlen(av[i]);
		r[d++] = '\n';
	}

	r[d] = '\0';
	return (r);
}
