#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid -  function that returns a pointer 
 * to a 2 dimensional array of integers
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **myint;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	myint = malloc(sizeof(int *) * height);

	if (myint == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		myint[x] = malloc(sizeof(int) * width);

		if (myint[x] == NULL)
		{
			for (; x >= 0; x--)
				free(myint[x]);

			free(myint);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			myint[x][y] = 0;
	}

	return (myint);
}
