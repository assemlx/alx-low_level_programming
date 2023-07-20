#include "main.h"
/**
  *print_line - print a line
  *@n: the long of line
  *Return: void
  */
void print_line(int n)
{
	int i;

	i = 1;
	while (i <= n)
	{
		if (n <= 0)
			break;
		_putchar('-');
		i++;
	}
	_putchar('\n');
}
