#include "function_pointers.h"

/**
 * array_iterator - function that executes a function
 *  given as a parameter in an array
 * @array - a pointer to the array
 * @size: size of the array
 * @action: a pointer to a function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *last = array + size - 1;

	if (array && size && action)
		while (array <= last)
			action(*array++);
}
