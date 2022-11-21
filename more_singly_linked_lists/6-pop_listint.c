#include "lists.h"
/**
 *pop_listint - function that deletes the head node of a linked list
 *@head: the linked list
 *Return: the head node n
 */

int pop_listint(listint_t **head)
{
	listint_t *prev = *head;
	int i = 0;

	if (head == NULL || *head == NULL)
		return (0);
	i = prev->n;
	*head = prev->next;
	free(prev);

	return (i);
}

