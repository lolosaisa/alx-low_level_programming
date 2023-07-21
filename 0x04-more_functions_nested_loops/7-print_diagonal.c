#include "main.h"
#include <stdio.h>

/**
 *  print_diagonal - Function draws diagonal line on terminal
 *  @n: number of times
 *  Return: Always 0
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
		_putchar('\n');
	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
