#include "lists.h"

/**
  * print_list - prints all elements of a list
  * @h: singly linked list
  * Return: numberof elements in the list
  */
size_t print_list(const list_t *h)
{
	size_t num_elem;

	num_elem = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)")
					else
						printf("[%d] %s\n", h->len, h->str);
					h = h->next;
					num_elem++;
	}
	return (num_elem);
}
