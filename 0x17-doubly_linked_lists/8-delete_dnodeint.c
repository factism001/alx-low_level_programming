#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of list.
 * @head: head of linked list
 * @index: index to delete node
 * Return: -1 or 1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	current = *head;
	for (i = 0; i < index; i++)
	{
		current = current->next;
		if (current == NULL)
			return (-1);
	}
	if (current->prev != NULL)
		current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	if (index == 0)
		*head = current->next;
	free(current);
	return (1);
}
