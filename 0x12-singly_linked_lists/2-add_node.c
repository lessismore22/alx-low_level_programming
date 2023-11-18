#include "lists.h"

/**
 * add_node - this function adds a new node to the
 * beginning of a list_t list.
 * @str: string to be stored in the list.
 * @head: double pointer to the linked list
 * Return: the address of the new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}

