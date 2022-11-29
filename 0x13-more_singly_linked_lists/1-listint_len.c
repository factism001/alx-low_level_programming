#include "lists.h"

/**
  * listint_len - function that returns the number of elements
  * in the singly linked list
  * @h: the singly linked list
  * Return: the number of elements in the list
  */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
