#include "lists.h"

/**
  * sum_listint - Sums all the data (n) of a linked list
  * @head: pointer to the start of the list
  *
  * Return: sum or 0 for empty list
  */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	if (!head)
		return (0);
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
