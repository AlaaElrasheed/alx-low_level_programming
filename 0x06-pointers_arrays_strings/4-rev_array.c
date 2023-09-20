#include "main.h"

/**
 * reverse_array - The main faunction
 *
 * @a: Function value
 *
 * @n: Function value
 *
 * Return: Always 0
*/

void reverse_array(int *a, int n)
{
	int l, m;

	for (l = 0; l < n--; l++)
	{
		m = a[l];
		a[l] = a[n];
		a[n] = m;
	}
}
