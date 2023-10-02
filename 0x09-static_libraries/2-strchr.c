#include "main.h"

/**
  * _strchr - Entrey point
  *
  * @s: parameter deal with the function
  *
  * @c: parameter deal with function
  *
  * Return: Always 0
  */

char *_strchr(char *s, char c)
{
	int lmao;

	for (lmao = 0; s[lmao] >= '\0'; lmao++)
	{
	if (s[lmao] == c)
	return (s + lmao);
	}
	return (0);
}
