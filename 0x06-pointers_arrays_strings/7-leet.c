#include "main.h"
/**
 * *leet - encode each string into 1337
 * @str: the input string
 * Return: the encoded string
 */
char *leet(char *str)
{
	char *c = str;
	char keys[] = {'A', 'E', 'O', 'T', 'L'};
	int encoded[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*str)
	{
		for (i = 0; i < sizeof(keys) / sizeof(char); i++)
		{
			if (*str == keys[i] || *str == keys[i] + 32)
			{
				*str = encoded[i] + 48;
			}
		}
		str++;
	}
	return (c);
}
