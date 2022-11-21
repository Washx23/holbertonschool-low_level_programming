#include "lists.h"
#include "4-free_listint.c"

/**
 *free_listint2 - function that frees a list and set the head to NULL
 *@head: the list
 *Return: void
 */

void free_listint2(listint_t **head)
{
	if (head)
	{
		free_listint(*head);
		*head = NULL;
	}
}
