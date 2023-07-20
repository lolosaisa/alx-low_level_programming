#include "main.h"
#include <stdio.h>
/**
 * _isupper - Function that checks if a character
 * is uppercase
 * @c: Character being inputed
 *
 * Return: 1 if it's uppercase, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
}
