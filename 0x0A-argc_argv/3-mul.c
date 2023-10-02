#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entey point
 *
 * @argc: No. of arguments
 *
 * @argv: array of arguments
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int result, no1, no2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	no1 = atoi(argv[1]);
	no2 = atoi(argv[2]);
	result = no1 * no2;

	printf("%d\n", result);

	return (0);
}
