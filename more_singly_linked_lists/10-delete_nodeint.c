#include "lists.h"
#include "7-get_nodeint.c"

/**
*pop - function that deletes the head node of a linked list
 *@head: the linked list
 *Return: 1 sucess
 */

int pop(listint_t **head)
{
	listint_t *prev = *head;

	if (head == NULL || *head == NULL)
		return (0);
	*head = prev->next;
	free(prev);

	return (1);
}

/**
 *delete_nodeint_at_index - function that deletes a node at the given position
 *@head: pointer to the first node
 *@index: index
 *Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del = NULL,  *node = *head;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
		return (pop(head));
	node = get_nodeint_at_index(*head, index);
	if (!node)
		return (-1);
	del = get_nodeint_at_index(*head, index - 1);
	if (!del)
		return (-1);
	return (pop(&(del->next)));

}
