#include "main.h"
/**
 **_strcat - to concatenate two strings
 *@dest: first string
 *@src: second string
 *Return: the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i++] = src[j];
		j++;
	}
	return (dest);
}
