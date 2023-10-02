#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argv: array of arguments
 *
 * @argc: No. of arguments
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int l, leastcents = 0, money = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for   (l = 0; l < 5; l++)
		{

			if (money >= cents[l])
			{
				leastcents += money / cents[l];
				money = money % cents[l];
			}
				if (money % cents[l])
				{
					break;
				}
			}
		}
	printf("%d\n", leastcents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
