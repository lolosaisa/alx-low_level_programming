#include "main.h"
/**
 * print_last_digit - Prints the last digit
 *
 * @a: Input as an integer
 *
 * Return: Last digit
 */
int print_last_digit(int a)
{
	int b;

	b = a % 10;

	if (b < 0)
	{
		_putchar(-b + 48);
		return (-b);
	}
	else
	{
		_putchar(b + 48);
		return (b);
	}
}
