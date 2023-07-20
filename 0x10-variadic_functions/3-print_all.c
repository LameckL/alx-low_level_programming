#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - func that prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *st, *ep = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", ep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", ep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", ep, va_arg(list, double));
					break;
				case 's':
					st = va_arg(list, char *);
					if (!st)
						st = "(nil)";
					printf("%s%s", ep, st);
					break;
				default:
					i++;
					continue;
			}
			ep = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
