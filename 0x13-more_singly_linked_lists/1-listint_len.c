#include "lists.h"

/**
 * listint_len - Entry point
 * @h: function parameter
 *
 * Return: size of list
 */

size_t listint_len(const listint_t *h)
{
	size_t l  = 0;

	while (h)
	{
	l++;
	h = h->next;
	}

	return (l);
}
