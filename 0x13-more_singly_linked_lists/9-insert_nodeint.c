#include "lists.h"
#include <stdio.h>
/**
 * insert_nodeint_at_index - a func that inserts a new node in a list
 * at a given point
 * @head: a pointer pointing to the first node on the list
 * @idx: index where to where new node is added
 * @n: data to be added to the new node
 * Return: a pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newn;
	listint_t *tmp = *head;

	new = malloc(sizeof(listint_t));
	if (!newn || !head)
		return (NULL);

	newn->n = n;
	newn->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = newn;
		return (newn);
	}

	for (i = 0; tmp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = tmp->next;
			tmp->next = newn;
			return (newn);
		}
		else
			tmp = tmp->next;
	}

	return (NULL);
}
