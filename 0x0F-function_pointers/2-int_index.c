#include "function_pointers.h"

/**
 * int_index - return index place if comparison = true, else -1
 *
 * @array: array
 *
 * @size: size of array
 *
 * @cmp: pointer to function
 *
 * Return: integer index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int lol;

	if (array && size && cmp)

		while (lol < size)
		{
			if (cmp(array[lol]))
				return (lol);
			lol++;
		}
	return (-1);
}
