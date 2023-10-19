#include "lists.h"

/**
 * print_list -Entry point
 * @h: pointer
 *
 * Return: size of list
 */

size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("[%ld] %s\n", strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		x++;
	}
	return (x);
}
