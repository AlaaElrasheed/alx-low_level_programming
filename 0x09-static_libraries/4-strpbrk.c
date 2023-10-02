#include "main.h"

/**
  * _strpbrk - Entrey point
  *
  * @s: parameter deal with th function
  *
  * @accept: parameter deal with the function
  *
  * Return: Always 0.
  */

char *_strpbrk(char *s, char *accept)
{
	int fml, lol;

	for (fml = 0; s[fml] != '\0'; fml++)
	{
	for (lol = 0; accept[lol] != '\0'; lol++)
	{
	if (s[fml] == accept[lol])
		return (s + fml);
	}
	}
		return (0);
}
