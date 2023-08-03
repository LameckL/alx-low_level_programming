#include <stdio.h>
#include "main.h"

/**
 * set_bit - a function that sets a value of a bit to 1 at a given index
 * @n: a pointer to the number to be changed
 * @index: bit index to set to 1
 * Return: 1 success, -1 failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
