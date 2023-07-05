#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: the string value
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int lensize = 0;

	if (*s)
	{
		lensize++;
		lensize += _strlen_recursion(s + 1);
	}

	return (lensize);
}
