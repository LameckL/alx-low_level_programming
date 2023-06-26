#include "main.h"
/**
 * print_rev - function to print string in reverse
 * @s: string variable
 */
void print_rev(char *s)
{
	int leta = 0;
	int o;

	while (*s != '\0')
	{
		leta++;
		s++;
	}
	s--;
	for (o = leta; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
