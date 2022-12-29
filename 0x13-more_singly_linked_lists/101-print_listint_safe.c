#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to head of list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current, *next;

	if (head == NULL)
		exit(98);

	current = head;
	next = head->next;
	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (current <= next)
		{
			printf("-> [%p] %d\n", (void *)next, next->n);
			break;
		}

		current = current->next;

		if (current != NULL)
			next = current->next;
	}

	return (count);
}
