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
	p[0] = min;
	for (i = 1; i < max - min; i++)
	{
		p[i] = p[i - 1] + 1;
	}
	p[i] = max;
	return (p);
}
