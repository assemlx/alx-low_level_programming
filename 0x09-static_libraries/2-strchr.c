#include "main.h"
/**
 * *_strchr - Returns a pointer to the first occurrence of character in string
 * @s: the input string
 * @c: the specific character
 * Return: pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
