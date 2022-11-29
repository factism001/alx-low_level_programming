#include "lists.h"

/**
  * print_listint - a function that prints all elements in a linked list
  * @h: the linked list
  * Return: the number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
