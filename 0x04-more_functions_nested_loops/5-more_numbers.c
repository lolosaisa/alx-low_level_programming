#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Prints numbers from zero to ten
 * ten times
 * return: Void
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
				_putchar('1');
			_putchar(b % 10 + '0');
		}
		_putchar('\n');
	}
}
