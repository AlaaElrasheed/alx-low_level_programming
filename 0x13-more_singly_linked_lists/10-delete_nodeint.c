#include "lists.h"

/**
 * delete_nodeint_at_index - Entry point
 * @head: function parameter
 * @index: function parameter
 *
 * Return: 1 Success, or -1 Fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *present = NULL;
	unsigned int q = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
	*head = (*head)->next;
	free(temp);
	return (1);
	}

	while (q < index - 1)
	{
	if (!temp || !(temp->next))
	return (-1);
	temp = temp->next;
	q++;
	}
	present = temp->next;
	temp->next = present->next;
	free(present);
	return (1);
}
