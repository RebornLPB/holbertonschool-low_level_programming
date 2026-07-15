#include <stdio.h>
#include <stdlib.h>
#include "session.h"

/**
 * session_create - allocate and initialize a new session
 * @username: pointer to a username string
 *
 * Return: pointer to newly created session_t on success, NULL on failure
 */
session_t *session_create(char *username)
{
	session_t *session = NULL;

	session = malloc(sizeof(session_t));
	if (session == NULL)
		return (NULL);

	session->user = username;
	session->access_level = 1;

	return (session);
}

/**
 * session_print - print session information
 * @session: pointer to a session_t
 *
 * Description: prints the username and access level of the
 * provided session. If session is NULL, the function does nothing.
 */
void session_print(session_t *session)
{
	if (session == NULL)
		return;

	printf("User: %s\n", session->user);
	printf("Access level: %d\n", session->access_level);
}

/**
 * session_destroy - free a session and its associated username
 * @session: pointer to a session_t to be destroyed
 *
 * Description: frees the memory allocated for the session username
 * and the session itself. If session is NULL, the function does nothing.
 */
void session_destroy(session_t *session)
{
	if (session == NULL)
		return;

	if (session->user != NULL)
	{
		free(session->user);
		session->user = NULL;
	}
	free(session);
}
