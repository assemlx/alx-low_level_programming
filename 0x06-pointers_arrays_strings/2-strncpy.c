#include "main.h"
/**
 * *_strncpy - copy the second string to the first
 * @dest: first string
 * @src: second string
 * @n: the specific index
 * Return: the first string after copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
