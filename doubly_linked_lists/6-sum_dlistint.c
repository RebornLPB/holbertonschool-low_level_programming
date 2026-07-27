#include <stdlib.h>
#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
	unsigned int sum;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);

	while (head->next != NULL)
	{
		sum += head->n;
		temp = head->next;
	}
	return (sum);
}
