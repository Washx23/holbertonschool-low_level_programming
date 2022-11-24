#include "lists.h"

/**
 *sum_dlistint - function that return the sum of all data(n)
 *@head: pointer tot the first node
 *Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head)
	{
		s = head->n + s;
		head = head->next;
	}
	return (s);
}
