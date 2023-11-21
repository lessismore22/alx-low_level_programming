#include "lists.h"

/**
 *print_listint - this function prints all the elements of a
 *list_int list
 *@h: singly linked lists
 *Return: number of elements in the list
 */
size_t print_listint(const listint_t *h)
{
	int count =0;

	if (h->next != NULL)
	{
		printf("%d\n", h->n);
		count += 1;
		h = h->next;
	}

	return (count);
}

