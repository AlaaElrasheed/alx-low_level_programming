#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: No of arguments
 *
 * @argv: array of arguments
 *
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
