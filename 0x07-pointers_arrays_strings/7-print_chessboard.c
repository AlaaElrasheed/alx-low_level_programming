#include "main.h"

/**
  * print_chessboard - main function
  *
  * @a: parameter deal with the function
  *
  * Return: Always 0.
*/

void print_chessboard(char (*a)[8])
{
	int c;
	int k;

	for (c = 0; c < 8; c++)
	{
	for (k = 0; k < 8; k++)
	_putchar(a[c][k]);
	_putchar('\n');
	}
}
