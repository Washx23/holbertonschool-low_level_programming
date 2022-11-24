#include "lists.h"
#include "5-get_dnodeint.c"
dlistint_t *add_nodeint(dlistint_t **head, const int n);
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the first elemenit
 * @idx: index
 * @n: element
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode = NULL, *index = *h;

	if (h == NULL)
		return (NULL);
	if (!idx)
		return (add_nodeint(h, n));
	index = get_dnodeint_at_index(*h, idx - 1);
	if (index == NULL)
		return (NULL);
	newnode = add_nodeint(&(index->next), n);

	return (newnode);
}
/**
 *add_nodeint - function that adds a node
 *@head: The pointer to the pointer to the 1st node of the linked list
 *@n: integrers
 *Return: new node
 */
dlistint_t *add_nodeint(dlistint_t **head, const int n)
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
