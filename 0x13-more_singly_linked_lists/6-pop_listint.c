#include "lists.h"
#include<stdlib.h>
/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: pointer to the header of the function
 *
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	listint_t *newhead;
	int w;

	if (head == NULL || *head == NULL)
		return (0);

	newhead = (*head)->next;
	w = (*head)->n;
	free(*head);
	*head = newhead;

	return (w);
}
