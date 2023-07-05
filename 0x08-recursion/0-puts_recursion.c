#include "main.h"
/**
 * _puts_recursion - function printing recursive char
 * @s: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 2);
	}

	else
		_putchar('\n');
}
