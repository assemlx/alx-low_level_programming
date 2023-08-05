#include "main.h"
/**
 **_strncat - concatrnate two strings until specific index
 *@dest: first string
 *@src: second string
 *@n: the secific index
 *Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i])
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}
