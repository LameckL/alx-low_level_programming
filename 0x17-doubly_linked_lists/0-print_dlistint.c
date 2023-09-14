#include "lists.h"

/**
 * print_dlistint - this func prints all elements of a dlistint_t list
 * @h: list pointer
 * Return: no. nodes in a list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
