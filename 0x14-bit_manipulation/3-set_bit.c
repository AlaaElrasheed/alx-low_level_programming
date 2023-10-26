#include "main.h"

/**
 * set_bit - sets the bit at the index
 * @n: number to set
 * @index: index at which to set bit
 *
 * Return: 1 if success, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (!!(*n |= 1l << index));
}
