#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Function to print out the name
 * @name: pointer to character
 * @f: name of our function pointer
 *
 * Return: name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
