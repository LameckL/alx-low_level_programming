#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function to print name using pointer to function
 * @name: a string to add
 * @f: pointer to function
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
