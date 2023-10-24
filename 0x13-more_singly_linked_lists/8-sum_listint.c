#include "lists.h"

/**
 * sum_listint - Entry point
 * @head: function parameter
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int l = 0;
	listint_t *temp = head;

	while (temp)
	{
	l += temp->n;
	temp = temp->next;
	}
	return (l);
}
