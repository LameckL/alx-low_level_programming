#include "lists.h"
#include <stdio.h>
/**
 * delete_nodeint_at_index - a function that deletes a
 * node in a list at a specific index
 * @head: a pointer to the first element of the list
 * @index: index of the node to be delete
 * Return: 1 (Success), -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *present = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		i++;
	}


	present = tmp->next;
	tmp->next = present->next;
	free(present);

	return (1);
}
