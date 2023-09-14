#include "lists.h"

/**
 * add_dnodeint - func adding a new node at the beginning of a dlistint_t list
 * @head: list double pointer
 * @n: data being inserted to the new node
 * Return: the address of the new element, NULL - failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;

	new->next = *head;
	new->prev = NULL;

	if (*head)
		(*head)->prev = new;

	*head = new;

	return (new);
}
