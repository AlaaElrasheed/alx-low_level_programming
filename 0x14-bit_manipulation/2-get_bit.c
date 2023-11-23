#include "main.h"

/**
 * get_bit - return value of bit into the index
 * @n: No. of index
 * @index: the bit
 *
 * Return: the bit or -1 on fail
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}
