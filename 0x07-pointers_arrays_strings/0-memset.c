#include "main.h"
/**
 * _memset - function to fill a block of memory with a given value
 * @s: star address of memory to be filled
 * @b: the value needed
 * @n: number of bytes to be changed
 *
 * Return: array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
