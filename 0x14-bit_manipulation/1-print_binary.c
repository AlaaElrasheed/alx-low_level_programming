#include "main.h"

/**
 * print_binary - prints numbers as binary string
 * @n: printed number
 */

void print_binary(unsigned long int n)
{
	int a;
	int b = 0;

	a = sizeof(n) * 8;
	while (a)
	{
		if (n & 1l << --a)
		{
			_putchar('1');
			b++;
		}
		else if (b)
			_putchar('0');
	}
	if (!b)
		_putchar('0');
}
