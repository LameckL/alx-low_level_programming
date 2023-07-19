#include "function_pointers.h"
/**
 * int_index - function that searches for an ineger
 * return index place if comparison = true, else -1
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to function to compare values
 * Return: i if comparison is true else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
