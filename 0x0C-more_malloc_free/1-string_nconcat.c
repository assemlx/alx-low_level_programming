#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * @n: the first bytes of s2
 * Return: a pointer to the new string or null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, l1, l2;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = 0;
	while (s1[l1] != '\0')
		l1++;
	l2 = 0;
	while (s2[l2] != '\0')
		l2++;
	if (n > l2)
		n = l2;
	p = malloc((l1 + n) * sizeof(char) + 1);
	if (p == 0)
	{
		return (NULL);
	}
	for (i = 0; i < l1 + n; i++)
	{
		if (i < l1)
			p[i] = s1[i];
		else
			p[i] = s2[i - l1];
	}
	p[i] = '\0';
	return (p);
}
