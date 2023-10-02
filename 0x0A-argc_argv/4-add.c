#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argv: array of arguments
 *
 * @argc: No of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	char *a;

	while (--argc)
	{
		for (a = argv[argc]; *a; a++)
			if (*a < '0' || *a > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
