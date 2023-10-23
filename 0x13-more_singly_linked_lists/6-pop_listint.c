#include "lists.h"

/**
 * pop_listint - Entry point
 * @head: function parameter
 *
 * Return: the data inside the elements,
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int s;

	if (!head || !*head)
	return (0);

	s = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (s);
}
