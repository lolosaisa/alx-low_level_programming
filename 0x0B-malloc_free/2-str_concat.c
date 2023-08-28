#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Function concatenates two strings of any size
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to a newly allocated space in memory or NULL not
 */
char *str_concat(char *s1, char *s2)
{
	char *s;

	int a = 0;
	int b = 0;
	int c = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;

	while (s2[b])
		b++;

	c = a + b;
	s = malloc(sizeof(char) * (c + 1));

	while (b < a)
	{
		s[b] = s1[b];
		b++;
	}

	while (b < c)
	{
		s[b] = s2[b - a];
		b++;
	}

	s[b] = '\0';
	return (s);
}
