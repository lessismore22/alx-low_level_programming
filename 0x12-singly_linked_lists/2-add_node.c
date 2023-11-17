#include "lists.h"

/**
 * add_node - this function adds a new node to the
 * beginning of a list_t list.
 * @str: string to be stored in the list.
 * @head: head of the linked list
 * Return: the address of the new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int len;
	
	if (head != NULL && str != NULL)
	{

		new_node = (list_t *) malloc(sizeof(list_t));

		if (new_node == NULL)
		{
			free (new_node);
			return (NULL);
		}

		new_node->str = strdup(str);

	
	for (len = 0; str[len] != '\0'; len++)
	{
		new_node->len = len;
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
	}
	return(0);
}

