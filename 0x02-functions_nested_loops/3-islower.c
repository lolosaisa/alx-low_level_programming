#include "main.h"
/**
 * _islower - checks if c is lowercase and print
 * either if it's lowercase otherwise zero
 *
 * @c: character in ASCII
 *
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
