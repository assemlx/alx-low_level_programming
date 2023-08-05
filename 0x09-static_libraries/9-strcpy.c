#include "main.h"
/**
  *_strcpy - copy the second array to the first
  *@dest: the first array
  *@src: the second array
  *Return:  the first array
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = -1;
	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
