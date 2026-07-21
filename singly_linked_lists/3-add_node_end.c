#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head pointer of the list
 * @str: string to store in the new node (will be duplicated)
 *
 * Return: address of the new element, or NULL on failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *temp;
	unsigned int len = 0;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	if (str != NULL)
	{
		node->str = strdup(str);
		if (node->str == NULL)
		{
			free(node);
			return (NULL);
		}
		while (str[len] != '\0')
			len++;

	}
	else
	{
		node->str = NULL;
	}
	node->len = len;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = node;
	return (node);
}
