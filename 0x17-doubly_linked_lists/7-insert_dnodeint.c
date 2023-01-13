#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to head of list
 * @idx: index of the list where the new node should be added
 * @n: data of the new node
 * Return:  the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new_node = NULL;
	unsigned int i;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	for (i = 0; current != NULL && i < idx - 1; i++)
	{
		current = current->next;
	}

	if (current == NULL || i != idx - 1)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;
	if (current->next)
		current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
