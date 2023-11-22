#include "lists.h"

/**
 * pop_listint - this function deletes the head node of a
 * linked list and returns the node's data (n)
 * @head: pointer to the head
 * Return: returns value of node's data
 */
int pop_listint(listint_t **head)
{
	listint_t temp;
	int n;

	temp = *head;

	if (*head == NULL)
	       return (0);

	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}	

