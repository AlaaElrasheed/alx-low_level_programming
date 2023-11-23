#include "main.h"

/**
 * clear_bit - clear the bit in index
 * @n: No. to index
 * @index: bit to clear
 *
 * Return: 1 success, -1 fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (*n & 1l << index)
		*n ^= 1l << index;
	return (1);
}
