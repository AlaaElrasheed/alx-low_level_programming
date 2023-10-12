#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Entry point
 *
 * @separator: The string
 *
 * @n: The number of integers
 *
 * @...: A variable number
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int u = n;
	va_list lol;

	if (!n)
	{
		printf("\n");
	}
	va_start(lol, n);
	for (u = 0; u < n; u++)
	{
		printf("%d", va_arg(lol, int));

		if (u != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	va_end(lol);
}
