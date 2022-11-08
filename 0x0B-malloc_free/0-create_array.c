#include "main.h"
/**
  * create_array - a function that creates array of characters
  * and initialize it with specific characters
  * @size: the size of array
  * @c: the characters
  * Return: a pointer to the array
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(*a) * size);

	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
