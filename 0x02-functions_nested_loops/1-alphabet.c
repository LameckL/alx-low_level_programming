#include <stdio.h>
/*
 * main  -  entry point
 * print_alphabet() - function using a for loop to prints letters of alphabet
 * return:usually 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
