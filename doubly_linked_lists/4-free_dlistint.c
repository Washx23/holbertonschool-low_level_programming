#include "lists.h"

/**
 *free_dlistint - functin that free a linked list
 *@head: the start of the linked list
 *Return: void
 */

void free_dlistint(dlistint_t *head)
{

	if (head)
	{
		free_dlistint(head->next);

	}
	free(head);
}
