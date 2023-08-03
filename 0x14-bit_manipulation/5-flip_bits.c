#include <stdio.h>
#include "main.h"

/**
 * flip_bits - a function that returns number of bits
 * needed to flip to get from one number to another
 * @n: the first number
 * @m: the second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int present;
	unsigned long int apart = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		present = apart >> i;
		if (present & 1)
			count++;
	}

	return (count);
}
