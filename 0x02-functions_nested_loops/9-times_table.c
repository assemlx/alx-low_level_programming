#include "main.h"
/**
  *times_table - prints the 9 times table
  *Return:void
  */
void times_table(void)
{
	int p;
	int m;
	int res;

	for (p = 0; p <= 9; p++)
	{
		for (m = 0; m <= 9; m++)
		{
			res = p * m;
			if (m == 0)
			{
				_putchar('0' + res);
			}
			else if (res < 10)
			{
				_putchar(' ');
				_putchar('0' + res);
			}
			else
			{
				_putchar('0' + res / 10);
				_putchar('0' + res % 10);
			}
			if (m < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		 _putchar('\n');
	}
}
