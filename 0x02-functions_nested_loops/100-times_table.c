#include "main.h"
/**
  *print_times_table - prints the n times table
  *@n: times table to use
  *Return:void
  */
void print_times_table(int n)
{
	int p, m, res;

	if ((n >= 0) && (n <= 15))
	{
		for (p = 0; p <= n; p++)
		{
			for (m = 0; m <= n; m++)
			{
				res = p * m;
				if (m == 0)
				{
					_putchar('0' + res);
				}
				else if (res < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + res);
				}
				else if (res < 100)
				{
					_putchar(' ');
					_putchar('0' + res / 10);
					_putchar('0' + res % 10);
				}
				else
				{
					_putchar('0' + res / 100);
					_putchar('0' + (res - 100) / 10);
					_putchar('0' + res % 10);
				}
				if (m < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
