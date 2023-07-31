#include "lists.h"

/**
  * pop_listint - Del the head node of a linked list
  * @head: address of the head node pointer
  *
  * Return: head node's data (n) or 0 if list is empty
  */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!(*head))
		return (0);
	temp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
