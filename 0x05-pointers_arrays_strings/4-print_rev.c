#include "main.h"
/**
 * print_rev - Function that prints string in reverse
 * @s: String to be printed
 * @*s: points to the string s
 * Return: String in reverse followed by a new line
 */
void print_rev(char *s)
{
	int begin = 0;

	while (s[begin])
		begin++;
	while (begin--)
		_putchar(s[begin]);
	_putchar('\n');
}
