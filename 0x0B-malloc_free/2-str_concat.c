#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that that concatenates two strings
 * @s1: first input to concat
 * @s2: second input to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *mychar;
	int a, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = ci = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[ci] != '\0')
		ci++;
	mychar = malloc(sizeof(char) * (a + ci + 1));

	if (mychar == NULL)
		return (NULL);
	a = ci = 0;
	while (s1[a] != '\0')
	{
		mychar[a] = s1[a];
		a++;
	}

	while (s2[ci] != '\0')
	{
		mychar[a] = s2[ci];
		a++, ci++;
	}
	mychar[a] = '\0';
	return (mychar);
}
