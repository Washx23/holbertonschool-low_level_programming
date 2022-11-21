#include "lists.h"

/**
 *print_listint - function that prints a linked list that contains integrers
 *@h: head
 *Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t j = 0;

	while (h)
	{
		if (h->n)
			printf("%d\n", h->n);
		else
			printf("[0] (nil)\n");
	h = h->next;
	j++;
	}

	return (j);
}
