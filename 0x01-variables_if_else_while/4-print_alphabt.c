#include<stdio.h>
/**
 * main - Entry point for my program
 *
 * Description: Program that prints the alphabet
 * in lowercase except for q and e
 *
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar (ch);
		}
	}
	putchar ('\n');

	return (0);

}
