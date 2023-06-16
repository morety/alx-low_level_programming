#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - function returns the number of elements in a linked list
 *
 * @h: A pointer to the head of the doubly linked list (dlistint_t).
 *
 * Return: The number of nodes in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
