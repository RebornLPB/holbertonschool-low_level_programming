#include "lists.h"
#include <stdio.h>

/**
 * list_len - Returns the number of elements in a linked list
 * @h: Pointer to the head of the linked list
 *
 * Return: The number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
