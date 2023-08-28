#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - This function creates an array of  charecters
 * @size: size of array
 * @c: the charecter to go into the array
 *
 * Return: NULL if size is zero and a pointer if not
 */
char *create_array(unsigned int size, char c)
{
	unsigned int l;
	char *w;

	if (size == 0)
		return (NULL);
	w = malloc(size * sizeof(char));

	if (w == NULL)
		return (NULL);

	for (l = 0; l < size; l++)
	{
		w[l] = c;
	}
	return (w);
}
