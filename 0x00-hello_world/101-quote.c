#include<stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1
 */

int main(void)
{
	int fd;
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	size_t len = strlen(message);

	fd = STDERR_FILENO;
	write(fd, message, len);

	return 1;
}
