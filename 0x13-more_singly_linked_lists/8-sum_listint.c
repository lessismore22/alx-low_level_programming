#include "lists.h"

/**
 * sum_listint - this function returns the sum of all the
 * data(n) of a linked list
 * @head: pointer to the head of the linked file
 * Return: sum of the data of a linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
