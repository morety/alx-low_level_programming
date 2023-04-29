#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to a pointer to the head of the list
 * @str: string to be stored in the new node
 *
 * Return: The address of the new element
 * otherwise NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *new_node;
	list_t *tail;

	while (str[len] != '\0')
		len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		return (NULL);
	}
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		tail = *head;
		for (; tail->next != NULL; tail = tail->next)
		{

		}
		tail->next = new_node;
	}
	return (new_node);
}
