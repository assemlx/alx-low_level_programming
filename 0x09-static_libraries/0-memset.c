#include "main.h"
/**
 * *_memset - copy a specific length from the second string to the first string
 * @s: first string
 * @b: second string
 * @n: the taken length
 * Return: the first string after copying
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
