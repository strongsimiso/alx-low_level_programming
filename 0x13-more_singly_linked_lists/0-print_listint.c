#include "lists.h"

/**
  * print_listint - Prints all the elements of a list
  * @h: given list
  *
  * Return: number of nodes
  */

size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	if (h)
	{
		while (h->next != NULL)
		{
			len++;
			printf("%d\n", h->n);
			h = h->next;
		}
		len++;
		printf("%d\n", h->n);
	}
	return (len);
}
