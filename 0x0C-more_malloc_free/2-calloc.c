#include "main.h"
#include <stdlib.h>
/**
  * _calloc - a function that allocates memory for an array, using malloc
  * @nmemb: the number of elements in the array
  * @size: the size of byte
  * Return: pointer to the allocated memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;

	return (ptr);
}
