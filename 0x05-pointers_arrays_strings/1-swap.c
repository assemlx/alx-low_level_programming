#include "main.h"
/**
  *swap_int - swab two numbers
  *@a: first number to swap
  *@b: second nuber to swab
  *Return: void
  */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
