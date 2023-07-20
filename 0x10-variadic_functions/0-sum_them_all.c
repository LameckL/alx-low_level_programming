#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - func returning the sum of all its paramters
 * @n: number of paramters passed to the function
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
