#include "lists.h"
/**
 * add_nodeint - Function adds a new node at the beginning of a listint_t list.
 * @head: it points to the first node of the string
 *
 * Return: pointer to a new node or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
