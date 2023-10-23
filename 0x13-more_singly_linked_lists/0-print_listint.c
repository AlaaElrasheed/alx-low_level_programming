#include "lists.h"

/**
 * print_listint - Entry point
 * @h: function parameter
 *
 * Return: size of lists
 */

size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
	printf("%d\n", h->n);
	s++;
	h = h->next;
	}

	return (s);
}
