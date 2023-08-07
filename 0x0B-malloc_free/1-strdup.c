#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to a new string
 *      which is a duplicate of the string str
 * @str: the input string
 * Return: returns a pointer to the duplicated string or null
 */
char *_strdup(char *str)
{
	int l, i;
	char *p;

	if (str == NULL)
		return (NULL);

	l = 0;
	while (str[l] != '\0')
		l++;

	p = malloc(l * sizeof(*str) + 1);
	if (p == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < l; i++)
		{
			p[i] = str[i];
		}
	}
	return (p);
}
