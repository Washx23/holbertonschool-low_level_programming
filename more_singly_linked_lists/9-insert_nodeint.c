#include "lists.h"
#include "7-get_nodeint.c"
#include "2-add_nodeint.c"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first element
 * @idx: index
 * @n: element
 *
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode = NULL, *index = *head;

	if (head == NULL)
		return (NULL);
	if (!idx)
		return (add_nodeint(head, n));
	index = get_nodeint_at_index(*head, idx - 1);
	if (index == NULL)
		return (NULL);
	newnode = add_nodeint(&(index->next), n);

	return (newnode);
}
