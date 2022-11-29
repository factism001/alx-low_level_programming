#include "lists.h"

/**
  * pop_listint - deletes the head node of a listint_t linked list,
  * and returns the head node’s data (n).
  * @head: head of list
  * Return: n or 0 if list is empty
  */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;

	hnode = current->n;

	h = current->next;

	free(current);

	*head = h;

	return (hnode);
}
