#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: an int array
 * @size: array size
 * @cmp: a pointer for a function
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}