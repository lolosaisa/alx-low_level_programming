#include <stdlib.h>
#include<stdio.h>
#include<time.h>

/**
 * main - Entry point of the program
 *
 * Description: Is zero,positive or negative
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else if
		printf("%i is Zero\n", n);
	return (0);
}
