#include "lists.h"

/**
 * free_dlistint - func that frees a doubly-linked list
 * @head: pointer to the list to be freed
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
