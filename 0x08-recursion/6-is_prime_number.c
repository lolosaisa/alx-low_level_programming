#include "main.h"
/**
 * _is_prime_checker - Function checks if n is prime
 * @n: intager to be checked
 * @divisor: parameter
 *
 * Return: 1 if n is prime otherwise return 0
 */
int _is_prime_checker(int n, int divisor)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (divisor == 1)
	{
		return (1);
	}
	else if (n % divisor == 0)
	{
		return (0);
	}
	else
	{
		return (_is_prime_checker(n, divisor - 1));
	}
}

/**
 * _is_prime_checker - Helps to check prime number
 * @n: integer to be checked
 *
 * Return: 1 if input integer is prime otherwise 0
 */
int is_prime_number(int n)
{
	return (_is_prime_checker(n, n - 1));
}
