#include "main.h"
/**
 * _isalpha - Checks the alphabetic characters
 * if c is uppercase or lowercase print 1 else 0
 *
 * @c: A character in the ASCII
 *
 * Return: 1 if c is lowercase or uppercase else 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);

	}
	_putchar('\n');
}
