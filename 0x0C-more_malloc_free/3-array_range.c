#include "main.h"
#include <stdlib.h>
/**
 * *array_range - function that creates an array of integers
 * @min: the first element of the array
 * @max: the last element of the array
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i;
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc((max - min + 1) * sizeof(int));
	if (p == 0)
	{
		return (NULL);
	}
	for (i = 0; i < (max - min + 1); i++)
	{
		p[i] = min + i;
	}
	return (p);
}
