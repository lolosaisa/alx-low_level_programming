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
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	/*Your code goes here*/
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	if (m == 0)
		printf("Last digit of %d is %d and is 0\n", n, m);
	if (m < 6 && m != 0)
		printf("Last digit of %d is %d and is less than 6 not 0\n", n, m);

	return (0);
}
