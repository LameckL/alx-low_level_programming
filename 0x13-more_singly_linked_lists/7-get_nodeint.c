#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - a function returning the node at
 * a specific index in a linked list
 * @head: the first node of the list
 * @index: index of a node to return
 * Return: a pointer to the node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
