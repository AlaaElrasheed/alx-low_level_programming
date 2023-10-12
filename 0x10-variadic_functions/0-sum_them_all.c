#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Entry point
 *
 * @n: The number of paramters
 *
 * @...: variabl number
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int sum = 0, i = n;

	if (!n)
		return (0);
	va_start(ap, n);
		for (i = 0; i < n; i++)
			sum += va_arg(ap, int);
		va_end(ap);
		return (sum);
}
