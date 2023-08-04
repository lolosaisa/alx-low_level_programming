#include "main.h"
#include <unistd.h>
/**
 * _puts - Prints string to the standard output
 * @s: string to be printed
 * Return: 0
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		write(1, s, 1);
		s++;
	}
	write(1, "\n", 1);
}
