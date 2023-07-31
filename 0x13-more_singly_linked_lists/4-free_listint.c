#include "lists.h"

/**
  * free_listint - Frees a given list
  * @head: Pointer to the head of the list
  *
  * Return: void
  */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (!head)
		return;
	temp = head;
	head = head->next;
	free(temp);

	free_listint(head);
}
