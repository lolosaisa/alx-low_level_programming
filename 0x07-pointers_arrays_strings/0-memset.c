#include "main.h"
/**
 * *_memset - Function that fills memory with a constant byte
 * @s: the memory to be fillled
 * @b: the character to be copied
 * @n: the number of times to copy
 * Return: Pointer to memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
