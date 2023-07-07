#include <stdio.h>
#include "main.h"

/**
 * main - function to print all arguments received
 * @argc: number of arguments
 * @argv: an array of arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
