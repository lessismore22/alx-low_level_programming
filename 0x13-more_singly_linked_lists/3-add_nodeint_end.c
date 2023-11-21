#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: pointer to head of the list
 * @n: integer n
 * Return: the pointer to the address
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_X, *tmp;

	node_X = malloc(sizeof(listint_t));

	if (node_X == NULL)
	{
		return (NULL);


		node_X->n = n;

		node_X->next = NULL;

		tmp = *head;

	}

	if (*head == NULL)
	{
		*head = node_X;
	}

	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}

		tmp->next = node_X;
	}

	return (node_X);
}
