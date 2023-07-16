#include<stdio.h>
/**
 * main - Entry point for my program
 *
 * Description: Program that prints alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
		putchar('\n');
	return (0);
}
