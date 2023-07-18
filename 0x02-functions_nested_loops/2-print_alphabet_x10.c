#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabet ten times
 *
 * Description: Alphabet is printed ten times in lowercase
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int m;
	int n;

	for (m = 1; m <= 10; m++)
	{
		for (n = 97; n <= 122; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
