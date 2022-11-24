#include "lists.h"

/**
  * add_node - a function that adds node
  * @head: head of the linked list
  * @str: string to store in the list
  * Return: address of the head
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t new_char;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);

	for (new_char = 0; str[new_char]; new_char++)
		;
	new->len = new_char;
	new->next = *head;
	*head = new;

	return (*head);
}
