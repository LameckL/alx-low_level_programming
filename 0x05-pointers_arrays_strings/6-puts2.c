#include "main.h"
/**
 * puts2 - function to print one character out of two
 * starting with the first one
 * @str: input
 */
void puts2(char *str)
{
	int leta = 0;
	char *k = str;
	int i = 0;
	int j;

	while (*k != '\0')
	{
		k++;
		leta++;
	}
	i = leta - 1;
	for (j = 0 ; j <= i ; j++)
	{
		if (j % 2 == 0)
	{
		_putchar(str[j]);
	}
	}
	_putchar('\n');
}
