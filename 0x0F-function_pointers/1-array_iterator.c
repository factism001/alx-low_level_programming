#include "function_pointers.h"
/**
  * array_iterator - executes a function given as a parameter
  * on each element of an array.
  * @array: an array of elements.
  * @size: the size of array
  * @action: pointer to the array function
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
