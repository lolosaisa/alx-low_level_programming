#include "main.h"
/**
 * _puts_recursion - Prints out a string
 * @s: the pointer to a character
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
