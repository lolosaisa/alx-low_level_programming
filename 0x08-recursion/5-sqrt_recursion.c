#include "main.h"

/**
 * _sqrt_helper - function gets the natural square root
 * @n: intager used to get square root
 * @guess: numver of the natural square root
 *
 * Return: square root
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess  > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_helper(n, guess + 1));
	}
}

/**
 * _sqrt_recursion -  function that returns the natural square root of a number
 * @n: the intager
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0));
}
