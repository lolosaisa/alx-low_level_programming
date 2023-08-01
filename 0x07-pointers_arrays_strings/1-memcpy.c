#include "main.h"
/**
 * *_memcpy - copies memory from bytes to dest
 * @n: function copies
 * @dest: to memory area
 * @src: bytes from memory area
 * return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] =  src[i];
		i++;
	}
	return (dest);
}
