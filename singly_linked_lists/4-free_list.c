#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a linked list_t list
 * @head: Pointer to the first node of the list to be freed
 *
 * Description: Iterates through the singly linked list starting at head,
 * frees the string stored in each node (if not NULL) and then frees
 * the node itself. Sets no return value.
 */
void free_list(list_t *head)
{
	list_t *i;

	while (head != NULL)
	{
		i = head->next;
		free(head->str);
		free(head);
		head = i;
	}
}
