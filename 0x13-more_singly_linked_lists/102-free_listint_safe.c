#include "lists.h"

/**
 * free_listint_safe - this function frees a list
 * @h: pointer to the head of the list
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int value;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		value = *h - (*h)->next;
		if (value > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
