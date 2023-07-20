#include "main.h"
/**
  *more_numbers - print numbers from 1 to 14 ten times
  *Return: void
  */
void more_numbers(void)
{
	int i;
	int j;
	int units;
	int tens;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			tens = j / 10;
			units = j % 10;
			if (j > 9)
			{
				_putchar(tens + '0');
			}
			_putchar(units + '0');
		}
		_putchar('\n');
	}
}
