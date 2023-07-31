#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - a func calculating the sum of all the data in the list
 * @head: the first node in the list
 * Return: the  sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
