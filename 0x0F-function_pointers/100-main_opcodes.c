#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry piont
 * @argv: array of arguments
 * @argc: number of arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int k;
	char *lol = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	k = atoi(argv[1]);
	if (k < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (k--)
		printf("%02hhx%s", *lol++, k ? " " : "\n");
	return (0);
}
