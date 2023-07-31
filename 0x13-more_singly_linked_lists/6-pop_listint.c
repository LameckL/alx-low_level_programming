#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - a func that deletes the head node of a linked list
 * @head: a pointer to the first element in the linked list
 * Return: data in the elements that was deleted,
 * or 0 for an empty list
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
