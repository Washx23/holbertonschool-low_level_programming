#include "lists.h"

/**
 *get_nodeint_at_index - add a node at the index
 *@head: the list
 *@index: index
 *Return: the new node in a specific position
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *index_node = head;
	unsigned int i = 0;

	if (head == NULL)
		return (head);

	for (; i != index; i++)
	{
		if (index_node->next)
			index_node = index_node->next;
		else
			return (NULL);
	}
	return (index_node);
}
