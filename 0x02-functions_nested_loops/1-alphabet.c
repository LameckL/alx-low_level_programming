#include <stdio.h>
/*
 * main  -  entry point
 * print_alphabet() - function using a for loop to prints letters of alphabet
 * return:usually 0
 */
void print_alphabet(void)
{
	char alphabets;
		for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		{
			putchar(alphabets);
		}
		printf("\n");
}
int main(void)
{
	print_alphabet();
	return (0);
}
