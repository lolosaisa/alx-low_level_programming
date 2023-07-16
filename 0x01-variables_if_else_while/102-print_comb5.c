#include<stdio.h>
/**
 * main - Entry point for my code
 *
 * Description: Program prints possible combination of two digits
 *
 * Return: 0
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 < 99; num1++)
	{
		for (num2 = 0; num2 <= 99; num2++)
		{
			int t1 = num1 / 10;
			int o1 = num1 % 10;
			int t2 = num2 / 10;
			int o2 = num2 % 10;

			putchar(t1 + '0');
			putchar(o1 + '0');
			putchar(' ');
			putchar(t2 + '0');
			putchar(o2 + '0');

			if (num1 != 99 || num2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
