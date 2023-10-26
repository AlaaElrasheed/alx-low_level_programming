#include "main.h"

/**
 * binary_to_uint - converts binary numbers to unsigned integers
 * @b: string of binary numbers
 *
 * Return: 0 or converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int x = 0, y = 0;
	unsigned int count;

	if (!b)
		return (0);
	while (b[x] != '\0')
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
		x++;
	}
	x--;
	while (x >= 0)
	{
		count += (b[x] - '0') * (1 << y);
		x--;
		y++;
	}
	return (count);
}
