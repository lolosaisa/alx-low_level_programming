#include "main.h"
/**
 * _strlen - Function that checks the length of string
 * @s: string to be checked
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
