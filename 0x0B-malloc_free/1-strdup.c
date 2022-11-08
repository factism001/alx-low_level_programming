#include "main.h"
#include <stdlib.h>
/**
  * _strdup - returns a pointer to a newly allocated space in memory,
  * which contains a copy of the string given as a parameter.
  * @str: the string to duplicate
  * Return: a pointer to duplicated string
  */
char *_strdup(char *str)
{
	char *ptr;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	ptr = malloc(i * sizeof(*ptr) + 1);
	if (ptr == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		ptr[j] = str[i];
	ptr[j] = '\0';

	return (ptr);

}
