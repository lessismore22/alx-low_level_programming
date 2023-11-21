#include "lists.h"

/**
 * add_nodeint - this function adds a new node at the beginning
 * of a list
 * @head: head of the list
 * @n: integer value
 * Return: pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node_X;

	node_X = malloc(sizeof(listint_t));

	if (head != NULL)
	{
		node_X = malloc(sizeof(listint_t));
	
		if (node_X == NULL)
			return (NULL);

		node_X->n = n;
		node_X->next = *head;
		*head = node_X;
	}

	return (node_X);
	
}

