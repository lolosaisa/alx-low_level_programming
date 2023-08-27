#include "main.h"
/**
 * _print_rev_recursion - Function prints string in reverse
 * @s: the pointer to a character
 *
 * Return: string in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
