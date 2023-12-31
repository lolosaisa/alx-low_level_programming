#include "main.h"
/**
 * *_strpbrk - Function searches for set of bytes in a string
 * @s: String to be searched
 * @accept: string with the bytes to look for
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
