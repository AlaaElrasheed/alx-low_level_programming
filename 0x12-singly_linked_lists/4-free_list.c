#include "lists.h"

/**
 * free_list - Entry point
 * @head: function parameter
 */

void free_list(list_t *head)
{
	list_t *lol;

	while (head)
	{
	lol = head->next;
	free(head->str);
	free(head);
	head = lol;
	}
}
