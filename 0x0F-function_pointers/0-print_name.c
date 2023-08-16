#include "function_pointers.h"

/**
 * print_name - functon to print name
 * @name: name to print
 * @f: pointer to a void function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
