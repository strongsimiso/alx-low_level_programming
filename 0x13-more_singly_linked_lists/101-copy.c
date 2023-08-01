#include "lists.h"

/**
  * print_listint_safe - Prints list with possible loop
  * @head: pointer to first node
  *
  * Method: Point every traversed node to NULL leaving its value
  *         any node with a valid value but points to NULL indicates a loop
  * Return: number of nodes in the list
  */

size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	listint_t *ptr;

	while (head)
	{
		if (head->next == NULL && head->n)
		{
			printf("-> [%p] %d\n", (void *)&(head->n), head->n);
			break;
		}
		printf("[%p] %d\n", (void *)&(head->n), head->n);
		num++;
		ptr = (void *)head;
		head = head->next;
		ptr->next = NULL;
	}
	return (num);
}
