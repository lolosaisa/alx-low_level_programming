#include "lists.h"
/**
 * add_node_end - adds a node at the end of the list
 * @head: pointer to the first node
 * @str: the list
 *
 * Return: the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;

	if (str == NULL)
		return (NULL);
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->len = strlen(str);
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newnode;
	}
	return (newnode);
}
