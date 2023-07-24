#include "main.h"
/**
  *_strlen - print the length of a string
  *@s: the input string
  *Return: int
  */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		i++;
	return (i);
}
