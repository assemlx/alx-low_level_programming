#include "main.h"
/**
  *print_triangle - print a triangle
  *@size: size of the triangle
  *Return: void
  */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			if (size > 1)
			{
				for (j = size - i; j >= 1; j--)
				{
					_putchar(' ');
				}
			}
			for (k = 1; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
