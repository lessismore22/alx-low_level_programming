#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(listint_t *head)
{
	listint_t *temp;

	while (temp != NULL)
	{
		temp = head;
		head = head->next;
		free(current_node);
	}
}
