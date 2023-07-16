#include <stdio.h>
#include<time.h>
#include<stdlib.h>
/**
 * main - This is the entry point of the program
 *
 * Description: Program that out put the last  digit of the variable n
 * followed by a string
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*Your code goes here*/
	if (n % 10 > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	else if (n % 100 == 0)
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	else
		printf("Last digit of %d is %d and is less than 6 not 0\n", n, n % 10);

	return (0);
}
