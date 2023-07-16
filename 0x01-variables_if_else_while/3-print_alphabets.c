#include<stdio.h>
/**
 * main - Entry point for my program
 *
 * Description: Program that prints alphabet
 * in lowercase then in uppercase
 *
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
