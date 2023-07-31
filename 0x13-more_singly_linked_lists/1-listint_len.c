#include "lists.h"

/**
  * listint_len - returns the number of elements in a linked list
  * @h: Pointer to the head of the list
  *
  * Return: number of elems of the list
  */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	if (h)
	{
		while (h->next != NULL)
		{
			len++;
			h = h->next;
		}
		len++;
	}
	return (len);
}
