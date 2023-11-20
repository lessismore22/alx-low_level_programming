#include "lists.h"

/**
 *print_listint - this function prints all the elements of a
 *list_int list
 *@h: singly linked lists
 *Return: number of elements in the list
 */
size_t print_listint(const listint_t *h)
{
	int count =1;
	const listint_t *current = h;

	if (h->next != NULL)
	{
		printf("%d\n", current->n);
		count += 1;
		current = current->next;
	}

	return (count);
}

