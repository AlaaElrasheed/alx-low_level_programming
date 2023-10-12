#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Entry point
 *
 * @separator: The string
 *
 * @n: The number of strings
 *
 * @...: variable number
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list fml;
	char *s;
	unsigned int y = n;

	va_start(fml, n);

	for (y = 0; y < n; y++)
	{
		s = va_arg(fml, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (y != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(fml);
}
