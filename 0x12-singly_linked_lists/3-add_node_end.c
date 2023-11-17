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
	list_t *new_node, *node_x
	size_t count;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (n = 0; str[n]; n++)
		new_node->len = n;
		new_node->next = NULL;
		node_x = *head;

	if (node_x == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (node_x->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node;
	}
	return (*head);

}
