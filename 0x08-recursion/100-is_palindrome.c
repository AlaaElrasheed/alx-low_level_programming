#include "main.h"

int check_pal(char *s, int w, int length);
int _strlen_recursion(char *s);

/**
 * is_palindrome - Entrey point
 *
 * @s: function parameter
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
		return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - Entrey point
 *
 * @s: function parameter
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - Entrey point
 *
 * @s: function parameter
 *
 * @w: iterator
 *
 * @length: function parameter
 *
 * Return: 1 if palindrome, 0 if not
*/

int check_pal(char *s, int w, int length)
{
	if (*(s + w) != *(s + length - 1))
	{
		return (0);
	}
	if (w >= length)
	{
		return (1);
	}
	return (check_pal(s, w + 1, length - 1));
}
