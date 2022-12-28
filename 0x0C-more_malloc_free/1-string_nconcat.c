#include "main.h"
#include <stdlib.h>
/**
  * string_nconcat - a function that concatenate two strings
  * @s1: the source string
  * @s2: the destination string
  * @n: the number of character in 's2'
  * Return: Pointer to function or NULL if failure
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, c, new_string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n > j)
		n = j;

	new_string = i + n;

	ptr = malloc(new_string + 1);

	if (ptr == NULL)
		return (NULL);

	for (c = 0; c < new_string; c++)
	{
		ptr[c] = s1[i];
		ptr[c] = s2[i];
	}

	ptr[c] = '\0';

	return (ptr);
}
