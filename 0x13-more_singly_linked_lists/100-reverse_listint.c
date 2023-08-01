#include "lists.h"

/**
  * reverse_listint - Reverses a linked list
  * @head: Address of the pointer to the head node of the list
  *
  * Return: pointer to the first node of the reversed list
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *left, *right;

	left = NULL;
	right = NULL;
	while (*head)
	{
		left = right;
		right = *head;
		*head = (*head)->next;
		right->next = left;
	}
	*head = right;
	return (*head);
}
