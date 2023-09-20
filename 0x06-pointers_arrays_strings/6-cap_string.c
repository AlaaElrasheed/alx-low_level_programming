#include "main.h"

/**
 * cap_string - The main  function
 *
 * @str: Function value
 *
 *  Return: Void
*/

char *cap_string(char *str)
{
	int compute = 0;

	while (str[compute])
	{
	while (!(str[compute] >= 'a' && str[compute] <= 'z'))
		compute++;
	if (str[compute - 1] == ' ' ||
	str[compute - 1] == '\t' ||
	str[compute - 1] == '\n' ||
	str[compute - 1] == ',' ||
	str[compute - 1] == ';' ||
	str[compute - 1] == '.' ||
	str[compute - 1] == '!' ||
	str[compute - 1] == '?' ||
	str[compute - 1] == '"' ||
	str[compute - 1] == '(' ||
	str[compute - 1] == ')' ||
	str[compute - 1] == '{' ||
	str[compute - 1] == '}' ||
	compute == 0)
	str[compute] -= 32;
	compute++;
	}
	return (str);
}

