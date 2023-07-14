#include <stdlib.h>
#include<stdio.h>
#include<time.h>

/**
 * main - Entry point of the program
 *
 * Description: This program assigns a random number to a variable n and print whether the number is zero,positive or negative
 *
 * Return: 0
 */
int main (void)
{  
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("The number %d ", n);

	if(n>0)
		printf("%d is positive\n," n);
	else if(n<0)
		printf("%d is negative\n, "n);
	else
		printf("%d is Zero\n," n);

	return (0);
}
