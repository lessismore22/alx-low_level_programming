#include "lists.h"

/**
 * listint_len - this function returns the number of elements
 * in a linked listint_t list
 * @h: head of the list
 * Return: returns the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{

	int count = 0;


	while (h != NULL)
	{

		h = h->next;
		count += 1;
		}
	}

	return (count);
}
