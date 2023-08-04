#include <unistd.h>
#include "main.h"
/**
 * _putchar - Function that is used to display character
 * @c: Character to be displayed
 * return: 0
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
