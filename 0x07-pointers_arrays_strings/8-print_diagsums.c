#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - main function
  *
  * @size: input deal with the function
  *
  * @a: input deal with the function
  *
  * Return: Always 0
*/

void print_diagsums(int *a, int size)
{
	int compute3;
	int compute9;
	int q;

	compute3 = 0;
	compute9 = 0;

	for (q = 0; q < size; q++)
	{
	compute3 = compute3 + a[q * size + q];
	}
	for (q = size - 1; q >= 0; q--)
	{
	compute9 += a[q * size + (size - q - 1)];
	}
	printf("%d, %d\n", compute3, compute9);
}
