#include "main.h"

/**
 * print_array - a function that prints b elements of an array
 * @a: array name
 * @b: number of elements of the array to be printed
 */
void print_array(int *a, int b)
{
	int i;

	for (i = 0; i < (b - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (b - 1))
		{
			printf("%d", a[ - 1]);
		}
			printf("\n");
}
