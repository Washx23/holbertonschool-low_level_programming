#include "lists.h"

/**
 *add_nodeint - function that adds a node
 *@head: The pointer to the pointer to the 1st node of the linked list
 *@n: integrers
 *Return: new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nnode = NULL; /** the new node */

	nnode = malloc(sizeof(listint_t));

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
