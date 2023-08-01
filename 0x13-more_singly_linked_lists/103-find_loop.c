#include "lists.h"
#include <stdio.h>
/**
 * find_listint_loop - a func that finds the loop in a linked list
 * @head: the linked list to be searched
 * Return: the address of a node where the loop begins, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slw = head;
	listint_t *swift = head;

	if (!head)
		return (NULL);

	while (slw && swift && swift->next)
	{
		swift = swift->next->next;
		slw = slw->next;
		if (swift == slw)
		{
			slw = head;
			while (slw != swift)
			{
				slw = slw->next;
				swift = swift->next;
			}
			return (swift);
		}
	}

	return (NULL);
}
