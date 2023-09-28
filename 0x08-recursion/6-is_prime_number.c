#include "main.h"

int actual_prime(int n, int z);

/**
 * is_prime_number - Entrey point
 *
 * @n: function parameter
 *
 * Return: 1 if the number is prime , 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - Entrey point
 *
 * @n: function parameter
 *
 * @z: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int z)
{
	if (z == 1)
	{
		return (1);
	}
	if (n % z == 0 && z > 0)
	{
		return (0);
	}
	return (actual_prime(n, z - 1));
}
