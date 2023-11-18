#include "lists.h"

/**
 * add_node_end - this function adds a new note at the end of a
 * list_t list
 * @head: head of the linked list
 * @str: string to store in the list
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *node_x = *head;
	unsigned int len = 0;

	while (str[len])
		len++;


	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (node_x->next)
		node_x = node_x->next;
	node_x->next = new_node;
	return (new_node);
}
