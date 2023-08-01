#include "lists.h"
#include <stdio.h>

size_t loop_listint(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * loop_listint - a function that counts the number in unique nodes
 * of a looped listint_t list
 * @head: a pointer to the head of the list to check.
 * Return: where the list not looped 0,
 * else - the number of unique nodes in the list
 */
size_t loop_listint(const listint_t *head)
{
	const listint_t *toyota, *honda;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	toyota = head->next;
	honda = (head->next)->next;

	while (honda)
	{
		if (toyota == honda)
		{
			toyota = honda;
			while (toyota != honda)
			{
				nodes++;
				toyota = toyota->next;
				honda = honda->next;
			}

			toyota = toyota->next;
			while (toyota != honda)
			{
				nodes++;
				toyota = toyota->next;
			}

			return (nodes);
		}

		toyota = toyota->next;
		honda = (honda->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - this function prints a listint_t list
 * @head: a pointer to the head of the list
 * Return: number of nodes on the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = loop_listint(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
