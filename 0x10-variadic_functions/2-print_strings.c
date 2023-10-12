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
	char *s;
	unsigned int y = n;
	va_list lmao;

	va_start(lmao, n);
	while (y--)
	{
		s = va_arg(lmao, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (y != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(lmao);
}
