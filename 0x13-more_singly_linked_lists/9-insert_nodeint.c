#include "lists.h"

/**
  * insert_nodeint_at_index - Inserts a new node at a given position
  * @head: address of the pointer to head node of the list
  * @idx: index of list where new node will be inserted
  * @n: The given node value
  *
  * Return: address of new node or NULL if failed
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *new;
	unsigned int i = 0;

	ptr = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	while (ptr && i <= idx)
	{
		if (idx == 0)
		{
			new->next = ptr->next;
			*head = new;
			return (new);
		}
		if (i == idx - 1)
		{
			new->next = ptr->next;
			ptr->next = new;
			return (new);
		}
		ptr = ptr->next;
		i++;

	}
	return (NULL);
}
