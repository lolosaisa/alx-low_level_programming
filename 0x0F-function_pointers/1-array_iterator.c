#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Function that executes a function
 * given as a parameter
 * @size: Size pf the array
 * @action: pointer to the function i needd
 * @array: array
 *
 * Return: size of the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
