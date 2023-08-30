#include "main.h"
/**
 * _calloc - Function allocates memory for an array
 * @nmemb: the first member
 * @size: bytes
 *
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	memset(p, 0, nmemb * size);
	return (p);
}
