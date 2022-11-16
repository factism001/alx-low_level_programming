#include "function_pointers.h"
/**
  * int_index - a function that searches for an integer with functiin pointers
  * @array: tye array of elements
  * @size: the size of array
  * @cmp: the function pointer
  * Return: index of first element tgat matches 'cmp' or '-1' of not found
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (cmp && array)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			return (i);
		}
	}

	return (-1);
}
