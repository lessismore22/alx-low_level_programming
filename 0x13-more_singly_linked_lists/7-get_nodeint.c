#include "lists.h"

/**
 * get_nodeint_at_index - this function returns the nth node
 * of a linked list
 * @head: pointer to the head of the node
 * @index: index of the node
 * Return: the nth node of the linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num;

	for (num = 0; num < index && head != NULL; num++)
	{
		head = head->next;
	}

	return (head);
}
