#include "main.h"
/**
 * _strlen - Function that calculates the length of the string
 * @*s: Pointer that points to the first character
 * of the string
 * @s: Sting being checked
 * Return: Length of the sting
 */
int _strlen(char *s)
{
	int string_length = 0;

	while (s[string_length])
		string_length++;
	return (string_length);
}
