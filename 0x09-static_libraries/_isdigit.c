#include "main.h"
/**
 * _isdigit - Checks for a digit through 0 to 9
 * @c: Digit to be checked
 *
 * Return: 1 if c is num else 0
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
