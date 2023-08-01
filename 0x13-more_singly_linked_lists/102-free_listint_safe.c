#include "lists.h"
#include <stdio.h>
/**
 * free_listint_safe - a func that frees the linked list
 * @h: a pointer to the first node on the linked list
 * Return: the number of elements on the freed linked list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lenn = 0;
	int contr;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		contr = *h - (*h)->next;
		if (contr > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			lenn++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lenn++;
			break;
		}
	}

	*h = NULL;

	return (lenn);
}
