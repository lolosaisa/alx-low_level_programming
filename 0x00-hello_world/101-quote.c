#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1
 */
int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = strlen(message);
	ssize_t written = write(STDERR_FILENO, message, len);

	if (written != len)
	{
		perror("Write failed");
		return 1;
	}

	return 1;
}
