#include "main.h"
/**
  *jack_bauer - prints every minute of the day
  *Return: void
  */
void jack_bauer(void)
{
	int h1;
	int h2;
	int m1;
	int m2;
	int i = 9;

	for (h1 = 0; h1 <= 2; h1++)
	{
		if (h1 == 2)
			i = 3;
		for (h2 = 0; h2 <= i; h2++)
		{
			for (m1 = 0; m1 <= 5; m1++)
			{
				for (m2 = 0; m2 <= 9; m2++)
				{
					_putchar('0' + h1);
					_putchar('0' + h2);
					_putchar(':');
					_putchar('0' + m1);
					_putchar('0' + m2);
					_putchar('\n');
				}
			}
		}
	}
}
