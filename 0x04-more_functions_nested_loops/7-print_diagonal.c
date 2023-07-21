#include "main.h"
/**
  *print_diagonal - print a diagonal line
  *@n : the long of line
  *Return: void
  */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i < n; i++)
		{
			if (i > 1)
			{
				for (j = 1; j <= i - 1; j++)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
