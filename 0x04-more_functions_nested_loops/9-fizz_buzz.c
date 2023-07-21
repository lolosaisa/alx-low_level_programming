#include "main.h"
#include <stdio.h>

/**
 * main - Entry point for my program
 *
 * Description: Prints out numbers foem 1 to 100
 * but multiples of 3 prints fizz
 * and multiples of 5 print buzz for the both of them fizz buzz
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
