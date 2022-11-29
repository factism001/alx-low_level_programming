#include "lists.h"

/**
  * reverse_listint - reverses a linked list
  * @head: head of the list
  * Return: pointer to the first node
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_p *p;
	listint_p *n;

	p = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}

	*head = p;
	return (*head);
}
