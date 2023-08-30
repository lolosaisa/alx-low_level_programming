#include "lists.h"
/**
 * free_list - Function frees nodes in the list
 * @head: pointer to the first node
 *
 * return: nothing to return
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *temp = head;

		head = head->next;
		free(temp->str);
		free(temp);
	}
}
