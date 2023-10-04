#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Entry point
 *
 * @width: width input
 *
 * @height: height input
 *
 * Return: pointer to 2 d. array
 */

int **alloc_grid(int width, int height)
{
	int **k;
	int l, p;


	if (width <= 0 || height <= 0)
		return (NULL);

	k = malloc(sizeof(int *) * height);

	if (k == NULL)
		return (NULL);

	for (l = 0; l < height; l++)
	{
		k[l] = malloc(sizeof(int) * width);

		if (k[l] == NULL)
		{
			for (; l >= 0; l--)
				free(k[l]);

			free(k);
			return (NULL);
		}
	}

	for (l = 0; l < height; l++)
	{
		for (p = 0; p < width; p++)
			k[l][p] = 0;
	}

	return (k);
}
