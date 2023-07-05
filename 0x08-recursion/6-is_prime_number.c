#include "main.h"

int primeNumber(int n, int i);

/**
 * is_prime_number - function to tell if an integer is a prime number or not
 * @n: number to evaluate
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (primeNumber(n, n - 1));
}

/**
 * primeNumber - function that calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 * Return: 1 if n is prime, 0 if not
 */
int primeNumber(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (primeNumber(n, i - 1));
}
