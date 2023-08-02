#include "main.h"
/**
 * is_prime_number - a function that returns 1 if the
 * input integer is a prime number
 * @n: the input number
 * @checker: the help checker
 * Return: 0 or 1
 */
int check_prime(int n, int checker);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
/**
 * check_prime - to check the prime number
 * @n: the input number
 * @checker: the help checker
 * Return: 0 or 1
 */
int check_prime(int n, int checker)
{
	if (checker >= n && n > 1)
		return (1);
	else if (n <= 1 || n % checker == 0)
		return (0);
	else
		return (check_prime(n, checker + 1));
}
