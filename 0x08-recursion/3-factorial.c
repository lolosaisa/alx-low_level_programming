#include "main.h"
/**
 * factorial - Function returns factorial of a number
 * @n: an intager
 *
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
