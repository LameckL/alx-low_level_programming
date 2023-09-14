#include "lists.h"

/**
 * sum_dlistint - func returning sum of all data in a doubly-linked list
 * @head: list pointer
 * Return: data sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
