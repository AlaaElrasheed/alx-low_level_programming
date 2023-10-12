#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Entry point
 * @format: list of args
 */

void print_all(const char * const format, ...)
{
	int y = 0;
	char *s, *lol = "";

	va_list hmu;

	va_start(hmu, format);

	if (format)
	{
		while (format[y])
		{
			switch (format[y])
			{
				case 'c':
					printf("%s%c", lol, va_arg(hmu, int));
					break;
				case 'i':
					printf("%s%d", lol, va_arg(hmu, int));
					break;
				case 'f':
					printf("%s%f", lol, va_arg(hmu, double));
					break;
				case 's':
					s = va_arg(hmu, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", lol, s);
					break;
					default:
					y++;
					continue;
			}
			lol = ", ";
			y++;
		}
	}

	printf("\n");
	va_end(hmu);
}
