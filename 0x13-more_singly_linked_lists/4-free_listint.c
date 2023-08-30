#include "lists.h"
/**
 * free_listint - frees a list
 * @head: head of node
 *
 * Return: null
 */
void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *next_node;

	current = head;
	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}
