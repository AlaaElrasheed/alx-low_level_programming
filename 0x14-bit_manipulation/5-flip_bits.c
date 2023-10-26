#include "main.h"

/**
 * flip_bits - Entry point
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, y = 0;
	unsigned long int present;
	unsigned long int ex = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		present = ex >> x;
		if (present & 1)
			y++;
	}
	return (y);
}
