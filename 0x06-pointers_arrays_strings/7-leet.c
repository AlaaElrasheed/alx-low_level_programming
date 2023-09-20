#include "main.h"
#include <stdio.h>

/**
 * leet - main function
 *
 * @n: Function value
 *
 * Return: value of n
*/

char *leet(char *n)
{
	int s, i;

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (s = 0; n[s] != '\0'; s++)
	{
		for (i = 0; i < 10; i++)
		{
			if (n[s] == s1[i])
			{n[s] = s2[i];
			}
		}
	}
		return (n);
}
