#include "main.h"
/**
 * malloc_checked - Function allocates mem through malloc
 * @b: size of the memory
 *
 * Return: 0 is successful
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	
	return (p);
}
