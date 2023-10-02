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
	int q = 0;

	while (argc--)
	{
		printf("%s\n", *argv);
		q++;
	}
	return (0);
}
