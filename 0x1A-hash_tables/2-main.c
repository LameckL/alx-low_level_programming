#include <stdlib.h>
#include <string.h>
#include <stdio.h>
<<<<<<< HEAD
#include "hash_tables.h"

/**
 * main - check the code
=======
#include "../hash_tables.h"

/**
 * main - check the code for ALX-Africa Cohort 5 Students.
>>>>>>> 419c5363a21bf41a160a7d972c56f1791df6367b
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
<<<<<<< HEAD
    char *s;
    unsigned long int hash_table_array_size;

    hash_table_array_size = 1024;
    s = "cisfun";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));
    s = "Don't forget to tweet today";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));
    s = "98";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));  
    return (EXIT_SUCCESS);
=======
	char *s;
	unsigned long int hash_table_array_size;

	hash_table_array_size = 1024;
	s = "cisfun";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));
	s = "Don't forget to tweet today";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));
	s = "98";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));
	return (EXIT_SUCCESS);
>>>>>>> 419c5363a21bf41a160a7d972c56f1791df6367b
}
