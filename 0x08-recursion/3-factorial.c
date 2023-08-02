#include "main.h"
/**
 * factorial - return the factorial of a non_negative integer
 * @n: the input number
 * Return: hte factorial of the input number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
