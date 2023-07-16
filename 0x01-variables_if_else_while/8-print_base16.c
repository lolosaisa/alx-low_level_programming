#include<stdio.h>
/**
 * main - Entry poin for my code
 *
 * Description: Program prints all numbers of base 16
 * in lowercase
 *
 * Return: 0;
 */
int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
		putchar (number);
	for (number = 'a'; number <= 'f'; number++)
		putchar (number);
	putchar ('\n');
	return (0);
}
