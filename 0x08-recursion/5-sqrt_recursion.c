#include "main.h"
/**
 * _sqrt_recursion - return the square root of a non_negative integer
 * @n: the input number
 * @v: the root of th number
 * Return: the square root of n
 */
int sqrt_rec(int n, int v);
int _sqrt_recursion(int n)
{
	return (sqrt_rec(n, 1));
}
/**
 * sqrt_rec - print the square root of n
 * @n: the inpunt int
 * @v: the value of the root
 * Return: the the root
 */
int sqrt_rec(int n, int v)
{
	if (v * v == n)
		return (v);
	else if (v * v < n)
		return (sqrt_rec(n, v + 1));
	else
		return (-1);
}
