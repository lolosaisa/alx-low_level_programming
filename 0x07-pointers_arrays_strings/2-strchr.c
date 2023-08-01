#include "main.h"
/**
 * *_strchr - Function that locates character in string
 * @s: String to be searched
 * @c: char to be located
 * return: char
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
