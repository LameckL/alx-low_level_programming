#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function that returns a pointer to newly allocated space in memory
 * @str: char
 * Return: 0 success
 */
char *_strdup(char *str)
{
	char *mychar;
	int a, b = 0;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;

	aaa = malloc(sizeof(char) * (a + 1));

	if (mychar == NULL)
		return (NULL);

	for (r = 0; str[b]; b++)
		mychar[b] = str[b];

	return (mychar);
}
