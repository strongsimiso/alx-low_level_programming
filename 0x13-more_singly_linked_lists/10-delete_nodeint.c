#include "lists.h"

/**
  * delete_nodeint_at_index - Deletes a node at a given index
  * @head: address of the pointer to the head node
  * @index: node position to be deleted
  *
  * Return: 1 if success or -1 otherwise
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head, *temp;
	unsigned int i = 0;

	if (index == 0 && ptr)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}

	while (i <= index && ptr)
	{
		if (i == index - 1)
		{
			temp = ptr->next;
			ptr->next = (ptr->next)->next;
			free(temp);
			return (1);
		}
		ptr = ptr->next;
		i++;
	}
	return (-1);
}
