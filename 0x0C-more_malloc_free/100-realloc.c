#include "main.h"
#include <stdlib.h>
/**
  * _realloc - a functiin that reallocates a memory block using malloc and free
  * @old_size: the size, in bytes, of the allocated space for ptr
  * @new_size:  is the new size, in bytes of the new memory block
  * @ptr: pointer to memory previously allocated
  * Return: ptr
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size > old_size)
		return (NULL);

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == 0 && ptr != NULL)
		free(ptr);
	return (NULL);

	ptr = malloc(new_size);

	return (ptr);
}
