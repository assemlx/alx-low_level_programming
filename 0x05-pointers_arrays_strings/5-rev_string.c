#include "main.h"
/**
  *rev_string - reverse an string
  *@s: input string
  *Return: void
  */
void rev_string(char *s)
{
	int l, temp, i;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
	}
}
