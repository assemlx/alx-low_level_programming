#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print the input numbers
 * @separator: the separator between numbers
 * @n: the count of numbers
 * @...: the input numbers
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(arg, int));
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
