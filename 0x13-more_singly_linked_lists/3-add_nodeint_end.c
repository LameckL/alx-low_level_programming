#include "lists.h"

/**
 * add_nodeint_end - a func adding a node at the end of a linked list
 * @head: a pointer to the first element on the list
 * @n: data to be added in the new element
 * Return: a pointer to the new node, NULL for failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new;

	return (new);
}
