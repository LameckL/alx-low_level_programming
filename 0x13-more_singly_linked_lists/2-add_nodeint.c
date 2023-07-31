#include "lists.h"

/**
 * add_nodeint - a function rhat adds a new node at the
 * beginning of a linked list
 * @head: a pointer pointing to the first node
 * @n: data
 * Return: a pointer to the new node, NULL if for failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
