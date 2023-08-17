#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters.
 * @n: the count of numbers
 * @...: the input numbers
 * Return: the of numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list arg;

	if (n == 0)
		return (0);
	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);
	return (sum);
}
