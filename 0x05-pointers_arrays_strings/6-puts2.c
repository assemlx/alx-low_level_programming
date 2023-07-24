#include "main.h"
/**
  *puts2 - print even numbers in a string
  *@str: input string
  *Return: void
  */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
