#include "main.h"
#include <stdlib.h>
/**
  * array_range - a function that creates an array of integer
  * @min: minimum value to include
  * @max: maximum value to include
  * Return: pointer to the array
  */
int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ptr[i] = min;

	return (ptr);
}
