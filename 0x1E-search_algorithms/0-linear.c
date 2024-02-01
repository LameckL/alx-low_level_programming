#include "search_algos.h"

/**
  * linear_search - this func searches for a value in an
  *                 array of integers using linear search
  * @array: pointer to the first element of the array to search
  * @size: number of elements in the array
  * @value: vaalue to search
  *
  * Return: -1 iff the value is not present or the array is NULL,
  *         else, the first index where the value is located
  *
  * Description: prints a value whenever it is compared in the array
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
