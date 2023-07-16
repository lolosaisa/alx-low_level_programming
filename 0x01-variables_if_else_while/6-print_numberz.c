#include<stdio.h>
/**
 * main - Entry point for my code
 *
 * Description: Prints out the single digit numbera
 * of base ten
 *
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
		putchar (num);
	putchar ('\n');
	return (0);
}
