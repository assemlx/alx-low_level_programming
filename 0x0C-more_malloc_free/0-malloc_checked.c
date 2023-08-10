#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - unction that allocates memory using malloc
 * @b : the allocated space
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (p == 0)
		exit(98);

	return (p);
}
