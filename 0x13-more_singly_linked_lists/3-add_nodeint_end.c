#include "lists.h"

/**
  * add_nodeint_end - Adds a new node at the end of a list
  * @head: pointer to the starting element of the list
  * @n: new node to be added
  *
  * Return: address of the new element added
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (!(*head))
		*head = new;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
