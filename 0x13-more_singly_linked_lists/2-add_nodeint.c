#include "lists.h"

/**
  * add_nodeint - Adds a new node at the beginning of a list
  * @head: pointer to the 1st element of the list
  * @n: new int element to be added to list
  *
  * Return: address of the new element
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
