#include "lists.h"

/**
 * reverse_listint - a function reversing a linked list
 * @head: a pointer to the first node on the list
 * Return: a pointer to the first node of the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}

	*head = previous;

	return (*head);
}
