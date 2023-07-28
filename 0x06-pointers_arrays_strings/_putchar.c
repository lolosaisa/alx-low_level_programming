#include <unistd.h>

/**
 * _putchar - Writes the char c in the stdout
 * @c: character to be printed
 *
 * Return: 1 on success
 * on error -1 is returned and errno is set
 */
int _putchar(char c)
{
	return (write (1, &c, 1));
}
