#include <stdio.h>
#include "main.h"

/**
 * get_bit - functio returning the value of a bit at a given index
 * @n: no. to search
 * @index: index of the bit
 * Return: the bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}
