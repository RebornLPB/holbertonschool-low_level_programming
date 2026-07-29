#include <stdlib.h>
#include <string.h>
#include "session.h"

/**
 * session_create - Creates a new session object
 * @id: String identifier for the session
 * @uid: User identifier
 * @data: Pointer to buffer data
 * @data_len: Size of data buffer
 *
 * Return: Pointer to new session_t, or NULL on allocation failure
 */
session_t *session_create(const char *id, unsigned int uid,
			  const unsigned char *data, size_t data_len)
{
	session_t *s;

	if (!id || (data_len > 0 && !data))
		return (NULL);

	s = (session_t *)malloc(sizeof(*s));
	if (!s)
		return (NULL);

	s->id = (char *)malloc(strlen(id) + 1);
	if (!s->id)
	{
		free(s);
		return (NULL);
	}
	strcpy(s->id, id);
	s->uid = uid;
	s->data_len = data_len;
	s->data = NULL;

	if (data_len > 0)
	{
		s->data = (unsigned char *)malloc(data_len);
		if (!s->data)
		{
			free(s->id);
			free(s);
			return (NULL);
		}
		memcpy(s->data, data, data_len);
	}

	return (s);
}

/**
 * session_set_data - Safely updates data payload of an existing session
 * @s: Pointer to session object
 * @data: Pointer to new data buffer
 * @data_len: Length of new data buffer
 *
 * Return: 1 on success, 0 on failure
 */
int session_set_data(session_t *s, const unsigned char *data, size_t data_len)
{
	unsigned char *tmp;

	if (s == NULL)
		return (0);

	if (data_len == 0)
	{
		free(s->data);
		s->data = NULL;
		s->data_len = 0;
		return (1);
	}

	if (data == NULL)
		return (0);

	tmp = (unsigned char *)realloc(s->data, data_len);
	if (tmp == NULL)
		return (0);

	s->data = tmp;
	memcpy(s->data, data, data_len);
	s->data_len = data_len;
	return (1);
}

/**
 * session_destroy - Frees all memory owned by a session
 * @s: Pointer to session object to free
 */
void session_destroy(session_t *s)
{
	if (s == NULL)
		return;

	free(s->id);
	free(s->data);
	free(s);
}
