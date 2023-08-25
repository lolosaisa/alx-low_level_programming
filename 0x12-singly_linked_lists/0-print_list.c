#include <stdio.h>
#include "lists.h"
/**
 * print_list - Function that prints all elements in the list
 * @h: pointer to the list to be printed
 * @list_t: List to be printed
 *
 * Return: node printed
 */
size_t print_list(const list_t *h)
{
	size_t l = 0;
	const list_t *head = h;

	while (head != NULL)
	{
		if (head->str != NULL)
		{
			printf("[%d] %s\n", head->len, head->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		l++;
		head = head->next;
	}
	return (l);
}
