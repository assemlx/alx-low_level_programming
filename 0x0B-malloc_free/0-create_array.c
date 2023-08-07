#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars
 * , and initializes it with a specific char
 * @size: size of the array
 * @c : the initialize char
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *p = malloc(size);

	if (p == NULL || size == 0)
		return (NULL);
	while (size--)
		p[size] = c;
	return (p);
}
