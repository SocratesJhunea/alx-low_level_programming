#include "lists.h"

/**
 * free_listint2 - function that frees a linked list
 * @head: the pointer to the listint_t list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
	return;

	while (*head)
	{
	current = (*head)->next;

	free(*head);
	*head = current;
	}

	*head = NULL;
}
