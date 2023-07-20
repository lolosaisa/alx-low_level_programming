#include "main.h"
/**
 * positive_or_negative(int i) - Checks if a number is positive
 * or negative
 *
 * @0: The number to be checked
 *
 * Return: 0 when successful
 */
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is %s\n", i, "negative");
	}
	else if (i > 0)
	{
		printf("%d is %s\n", i, "positive");
	}
	else
	{
		printf("%d is %s\n", i, "zero");
	}
	return (0);
}
