#include "lists.h"

/**
 * free_listint - a function to free a linked list
 * @head: type listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
