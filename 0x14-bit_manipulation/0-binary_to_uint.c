#include "main.h"

/**
 * binary_to_uint - converts binary numbers to unsigned integers
 * @b: string of binary numbers
 *
 * Return: 0 or converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int x = 0;
	unsigned int count = 0;

	if (!b)
		return (0);
	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
	}
	for (x = 0; b[x] != '\0'; x++)
	{
		count <<= 1;
		if (b[x] == '1')
			count += 1;
	}
	return (count);
}
