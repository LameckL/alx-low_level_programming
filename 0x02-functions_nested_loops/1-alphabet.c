#include "main.h"
/*
 * print_alphabet - outputs the lower case alphabet on a line.
 */
void print_alphabet(void)
{
	char alphabets;
		for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		{
			_putchar(alphabets);
		}
		_putchar('\n');
}
