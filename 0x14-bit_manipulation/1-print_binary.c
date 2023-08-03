#include <stdio.h>
#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: the number to printed in binary
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int present;

	for (i = 63; i >= 0; i--)
	{
		present = n >> i;

		if (present & 1)
		{
			putchar('1');
			count++;
		}
		else if (count)
			putchar('0');
	}
	if (!count)
		putchar('0');
}
