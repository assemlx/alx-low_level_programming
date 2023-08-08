#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - unction that returns a pointer
 *     to a 2 dimensional array of integers.
 *@width: the width of array
 *@height: the height of the array
 *Return: pointer to a 2 dimensional array of integers or null
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int  **p;

	p = malloc(height * sizeof(*p));
	if (width == 0 || height == 0 || p == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			p[i] = malloc(width * sizeof(**p));
			if (p[i] == 0)
			{
				while (i--)
					free(p[i]);
				free(p);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				p[i][j] = 0;
		}
	}
	return (p);
}
