#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: const
 * Return: always.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t j = 0;

	while (h)
	{
		if (h->n)
			printf("%d\n", h->n);
		else
			printf("0\n");
	h = h->next;
	j++;
	}

	return (j);
}
