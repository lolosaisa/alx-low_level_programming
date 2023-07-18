#include "main.h"
/**
 * void times_table(void) - Prints the nine times table
 * starting with zero
 *
 * Return: Empty
 */
void times_table(void)
{
	int m, n, o, p, q;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 9; n++)
		{
			o = m * n;
			if (o > 9)
			{
				p = o % 10;
				q = (o - p) / 10;
				_putchar(44);
				_putchar(32);
			}
			_putchar(o + '0');
		}
	}
	_putchar('\n');
}
