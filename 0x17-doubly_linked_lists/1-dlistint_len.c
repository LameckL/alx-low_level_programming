#include "lists.h"

/**
 * dlistint_len - func returning no. of elements in a linked dlistint_t list
 * @h: list pointer
 * Return: no.  of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
