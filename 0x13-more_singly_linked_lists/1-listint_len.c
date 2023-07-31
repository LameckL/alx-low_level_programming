#include <stdio.h>
#include "lists.h"

/**
 * listint_len - a function returning  number of elements in a linked lists
 * @h: a linkedlist of type listint_t
 * Return: no. of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
