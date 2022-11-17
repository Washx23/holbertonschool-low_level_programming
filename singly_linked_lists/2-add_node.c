#include "lists.h"
/**
 * add_node - function to add nodes in beginning
 * @head: pointer to first node
 * @str: node data
 * Return: new
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
