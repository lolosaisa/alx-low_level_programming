#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Returns index searches for an integer
 * @size: number of the elements in an array
 * @cmp: is a pointer to the function to be used to compare values
 * @array: array
 *
 * return: -1 if there are no matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
