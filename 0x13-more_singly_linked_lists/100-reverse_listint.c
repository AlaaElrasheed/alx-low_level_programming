#include "lists.h"

/**
 * reverse_listint - Entry point
 * @head: function parameter
 *
 * Return: pointer to the first node in list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ex = NULL;
	listint_t *next = NULL;

	while (*head)
	{
	next = (*head)->next;
	(*head)->next = ex;
	ex = *head;
	*head = next;
	}

	*head = ex;
	return (*head);
}
