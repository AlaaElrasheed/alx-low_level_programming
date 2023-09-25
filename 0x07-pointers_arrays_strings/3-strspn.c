#include "main.h"

/**
  * _strspn - Entrey point
  *
  * @s: parameter deal with the function
  *
  * @accept: parameter deal with the function
  *
  * Return: Always 0.
  */
unsigned int _strspn(char *s, char *accept)
{

	unsigned int _strspn(char *s, char *accept);
	unsigned int lol = 0;
	int fml;

	while (*s)
	{
	for (fml = 0; accept[fml]; fml++)
	{
	if (*s == accept[fml])
	{
	lol++;
	break;
	}
	else if (accept[fml + 1] == '\0')
	return (lol);
	}
	s++;
	}
	return (lol);
}
