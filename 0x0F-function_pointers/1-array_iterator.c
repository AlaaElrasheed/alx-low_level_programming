#include "function_pointers.h"

/**
 * array_iterator - Entry point
 *
 * @array: array
 *
 * @size: size of array
 *
 * @action: pointer to function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *final = array + size - 1;

	if (array && size && action)
		while (array <= final)
			action(*array++);
}
