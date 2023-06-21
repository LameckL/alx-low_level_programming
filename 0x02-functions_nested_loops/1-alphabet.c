#include "main.h"
/*
 * print_alphabet - Function that prints the lowercase alphabet from 'a' to 'z'
 *
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
