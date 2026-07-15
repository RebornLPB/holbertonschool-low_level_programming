#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "user_input.h"

/**
 * read_username - Read a username from stdin.
 * Return: Dynamically allocated string containing the username,
 *         or NULL on failure.
 */
char *read_username(void)
{
	char *username = malloc(50 * sizeof(char));

	if (username == NULL)
		return (NULL);

	if (scanf("%49s", username) != 1)
	{
		free(username);
		return (NULL);
	}

	return (username);
}