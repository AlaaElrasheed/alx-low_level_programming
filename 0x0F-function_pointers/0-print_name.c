#include "function_pointers.h"

/**
 * print_name - Entry point
 *
 * @name: string
 *
 * @f: pointer to the function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
