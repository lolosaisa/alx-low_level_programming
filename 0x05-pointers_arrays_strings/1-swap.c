#include "main.h"
/**
 * swap_int - Function to swap value of integers
 * @a: swaps and store address of b
 * @b: swaps and stores address of a
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;
}
