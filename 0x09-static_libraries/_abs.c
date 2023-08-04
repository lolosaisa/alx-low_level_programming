#include "main.h"
/**
 * _abs - Calculates absolute value of an integer
 *
 * @i: The integer input
 *
 * Return: Absolute value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
