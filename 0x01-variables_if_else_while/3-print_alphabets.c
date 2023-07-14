#include <stdio.h>
/**
  * main - main block
  * Return: 0
  */
int main(void)
{
	char cs;
	char cc;

	for (cs = 'a'; cs <= 'z'; cs++)
	{
		putchar(cs);
	}
	for (cc = 'A'; cc <= 'Z'; cc++)
	{
		putchar(cc);
	}
	putchar('\n');
	return (0);
}
