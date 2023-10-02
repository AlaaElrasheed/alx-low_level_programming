#include <stdio.h>

/**
 * main - Entrey point
 *
 * @argv: array of arguments
 *
 * @argc: No of arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int q;

	for (q = 0; q < argc; q++)
	{
		printf("%s\n", *argv);
	}
	return (0);
}
