#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: the length
 */
int _strlen(char *s)
{
	int le = 0;

	while (*s != '\0')
	{
		le++;
		s++;
	}

	return (le);
}
