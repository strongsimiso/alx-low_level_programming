#include "lists.h"

/**
  * get_nodeint_at_index - Finds the nth node of a linked list
  * @head: pointer to the head of the list
  * @index: position of the list
  *
  * Return: the found node
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (i <= index && temp)
	{
		if (index == 0)
			return (temp);
		temp = temp->next;
		i++;
		if (i == index)
			return (temp);
	}
	return (NULL);
}
