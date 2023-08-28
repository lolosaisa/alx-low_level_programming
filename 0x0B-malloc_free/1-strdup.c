#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Function duplicates a string
 * @str: string to be duplicated
 *
 * Return: the string duplicated
 */
char *_strdup(char *str)
{
	int a = 0;
	int c = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[c])
	{
		c++;
	}

	s = malloc((sizeof(char) * c) + 1);

	if (s == NULL)
		return (NULL);

	while (a < c)
	{
		s[a] = str[a];
		a++;
	}

	s[a] = '\0';
	return (s);
}
