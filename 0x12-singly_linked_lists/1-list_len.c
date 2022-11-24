#include "lists.h"

/**
  * list_len - returns number of elements in a linked list
  * @h: the singly linked list
  * Return: the number of elements in the list
  */

size_t list_len(const list_t *h)
{
	size_t num_elem;

	num_elem = 0;
	while (h != NULL)
	{
		h = h->next;
		num_elem++;
	}
	return (num_elem);
}
