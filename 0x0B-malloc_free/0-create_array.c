#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *mystring;
	unsigned int i;

	mystring = malloc(sizeof(char) * size);
	if (size == 0 || mystring == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		mystring[i] = c;
	return (mystring);
}
