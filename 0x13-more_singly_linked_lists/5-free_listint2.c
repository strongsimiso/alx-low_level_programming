#include "lists.h"

/**
  * free_listint2 - Frees a list and sets head to NULL
  * @head: address of the head pointer
  *
  * Return: void
  */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!(*head))
	{
		*head = NULL;
		return;
	}
	temp = *head;
	(*head) = (*head)->next;
	free(temp);

	free_listint2(head);
}
