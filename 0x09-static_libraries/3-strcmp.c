#include "main.h"
/**
 * _strcmp - compare between two strings
 * @s1: first string
 * @s2: second string
 * Return: the difference between them
 */
int _strcmp(char *s1, char *s2)
{
	int res = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			res = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (res);
}
