#include "main.h"
/**
 * _puts - Function that prints ot the string
 * @str: String to be printed
 * @*str: pointer that point to the string
 * Return: String and a new line
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a])
	{
		_putchar(str[a]);
		a++;
	}

	_putchar('\n');
}
