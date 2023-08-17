#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print the input strings
 * @n: the count of strings
 * @separator: the separator between strings
 * @...: the input strings
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	char *s;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(arg, char*);
		if (s)
			printf("%s", s);
		else
			printf("nil");
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
