#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: the concatenated string or null
 */
char *str_concat(char *s1, char *s2)
{
	int l1, l2, i;
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
	p = malloc((l1 + l2) * sizeof(char) + 1);
	if (p == 0)
	{
		return (NULL);
	}
	for (i = 0; i <= l1 + l2; i++)
	{
		if (i < l1)
			p[i] = s1[i];
		else
			p[i] = s2[i - l1];
	}
	p[i] = '\0';
	return (p);
}
