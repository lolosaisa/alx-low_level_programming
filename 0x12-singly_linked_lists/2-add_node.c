#include <string.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_node - Function that adds new node to a list
 * @head: a pointer to a pointer head that points to string
 * @str: new string to be added
 *
 * Return: address of new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
