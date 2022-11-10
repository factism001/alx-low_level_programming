#include "main.h"
#include <stdlib.h>
/**
  * malloc_checked - Allocates memory and causes normal process termination
  * if function fails
  * @b: number 8of spaces needed in memory
  * Return: pointer to memory allocated
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
