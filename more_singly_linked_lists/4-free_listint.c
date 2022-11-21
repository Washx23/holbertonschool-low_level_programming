#include "lists.h"

/**
 *free_listint - functin that free a linked list
 *@head: the start of the linked list
 *Return: void
 */

void free_listint(listint_t *head)
{

	if (head)
	{
		free_listint(head->next);

	}
	free(head);
}
