#include "lists.h"

/**
 * find_listint_loop - Entry point
 * @head: function parameter
 *
 * Return: address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s = head;
	listint_t *q = head;

	if (!head)
	return (NULL);

	while (s && q && q->next)
	{
	q = q->next->next;
	s = s->next;
	if (q == s)
	{
	s = head;
	while (s != q)
	{
	s = s->next;
	q = q->next;
	}
	return (q);
	}
	}
	return (NULL);
}
