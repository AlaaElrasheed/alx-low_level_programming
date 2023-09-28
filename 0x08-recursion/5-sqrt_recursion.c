#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - Entrey point
 *
 * @n: function parameter
 *
 * Return: square root of the number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - Entrey point
 *
 * @n: function parameter
 *
 * @i: iterator
 *
 * Return: square root of the number
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
