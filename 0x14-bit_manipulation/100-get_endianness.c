#include "main.h"

/**
 * get_endianness - Entry point
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int lol;
	char *lmao;

	lol = 1;
	lmao = (char *)&lol;
	return (*lmao);
}
