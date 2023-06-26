#include "main.h"

/**
 * rev_string - function to reverse a string
 * @s: an input string
 */

void rev_string(char *s)
{
	char rev = s[0];
	int gen = 0;
	int i;

	while (s[gen] != '\0')
	gen++;
	for (i = 0; i < gen; i++)
	{
		gen--;
		rev = s[i];
		s[i] = s[gen];
		s[gen] = rev;
	}
}
