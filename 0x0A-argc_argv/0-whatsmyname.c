#include <stdio.h>
#include "main.h"

/**
 * main - Entrey point
 *
 * @argc: No of arguments
 *
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", *argv);
	return (0);
}
