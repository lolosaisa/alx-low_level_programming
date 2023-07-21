#include "main.h"
#include <stdio.h>

/**
 * print_line - Prints a new line in the terminal
 * @n: number of times of the character added
 *
 * Return: Always 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
