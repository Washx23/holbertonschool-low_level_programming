#include "lists.h"
dlistint_t *add(const int n);

/**
 **add_dnodeint_end - function that adds a node in the ends of the list
 *@head: the linked list
 *@n: integrers
 *Return: the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *aux = *head;
	dlistint_t *node = NULL;

	if (aux == NULL)
	{
		*head = add(n);
		return (*head);
	}
	while (aux->next != NULL)
	{
		aux = aux->next;
	}
	node = add(n);
	aux->next = node;

	return (aux->next);
}

/**
 *add - function that creates a new node
 *@n: the imput that the function receives
 *Return: the new node
 */
dlistint_t *add(const int n)
{
	dlistint_t *nnode = NULL;

	nnode = malloc(sizeof(dlistint_t));
	if (!nnode)
	{
		free(nnode);
		return (NULL);
	}
	nnode->n = n;
	nnode->next = NULL;
	return (nnode);
}
