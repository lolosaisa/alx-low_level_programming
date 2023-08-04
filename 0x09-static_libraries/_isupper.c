#include "main.h"
/**
 * _isupper - Function that checks if character is 
 * within the uppercase range
 * @c: Character to be checked
 * Return: Always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
