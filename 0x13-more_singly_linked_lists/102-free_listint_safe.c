#include "lists.h"

/**
 * free_listint_safe - Entry point
 * @h: function parameter
 *
 * Return: number of elements
 */

size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int lol;
	listint_t *temp;

	if (!h || !*h)
	return (0);

	while (*h)
	{
	lol = *h - (*h)->next;
	if (lol > 0)
	{
	temp = (*h)->next;
	free(*h);
	*h = temp;
	length++;
	}
	else
	{
	free(*h);
	*h = NULL;
	length++;
	break;
	}
	}

	*h = NULL;
	return (length);
}
