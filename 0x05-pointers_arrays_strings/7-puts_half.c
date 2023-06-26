#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, b = (length_of_the_string - 1) / 2
 * @str: an input
 */
void puts_half(char *str)
{
	int a;
	int b;
	int leta = 0;

	for (a = 0; str[a] != '\0'; a++)
		leta++;

	b = (leta / 2);

	if ((leta % 2) == 1)
		b = ((leta + 1) / 2);

	for (a = b; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
