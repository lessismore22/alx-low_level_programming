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
	list_t *new_node, *node_x;
	size_t m;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (m = 0; str[m]; m++)
	{
		new_node->len = m;
		new_node->next = NULL;
		node_x = *head;
	}

	if (node_x == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (node_x->next != NULL)
			new_node = node_x->next;
		node_x->next = new_node;
	}
	return (*head);

}
