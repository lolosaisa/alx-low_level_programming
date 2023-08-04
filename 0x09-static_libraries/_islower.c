#include <unistd.h>
#include "main.h"
/*
 * _islower - Function that checks if char is lowercase
 * @c: character to be checked
 * Return: 1 if it is lowercase, 0 for the rest
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
