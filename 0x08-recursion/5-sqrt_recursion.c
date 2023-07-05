#include "main.h"

int sqrtRecursion(int n, int i);

/**
 * _sqrt_recursion - function to return natural square root of a number
 * @n: number to calculate the square root of
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrtRecursion(n, 0));
}

/**
 * sqrtRecursion - a functio that recurses to find the natural
 * square root of a number
 * @n: value to calculate the sqaure root of
 * @i: iterator
 * Return: the resulting square root
 */
int sqrtRecursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrtRecursion(n, i + 1));
}
