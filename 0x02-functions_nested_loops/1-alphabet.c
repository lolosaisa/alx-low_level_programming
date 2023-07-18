#include "main.h"
/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Description: Program that prints the alphabet
 * in  lowecase
 *
 * Retun: 0
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
