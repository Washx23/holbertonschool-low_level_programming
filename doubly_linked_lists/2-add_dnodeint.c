#include "lists.h"

/**
 *add_dnodeint - function that adds a node
 *@head: The pointer to the pointer to the 1st node of the linked list
 *@n: integrers
 *Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nnode = NULL; /** the new node */

	nnode = malloc(sizeof(dlistint_t));

	if (!nnode)
	{
		free(nnode);
		return (NULL);
	}
	nnode->n = n;
	nnode->next = *head;
	*head = nnode;

	return (nnode);
}
