#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - print the consecutive character of s1 that are inn s2
 * @s: source string
 * @accept: seaching string
 *
 * Return: new string
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
		}
	}
	return (0);
}
