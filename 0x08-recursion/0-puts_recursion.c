#include "main.h"
/**
 * _puts_recursion - print a string follwed by a new line
 * @s: the input string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
