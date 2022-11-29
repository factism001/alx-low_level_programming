#include "lists.h"

/**
  * add_nodeint - adds a new node at the beginning of a list.
  * @head: head of the list
  * @n: the elements in the list
  * Return: address of the new element or Null if failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
