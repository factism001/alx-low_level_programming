#include "main.h"
#include <stdlib.h>
/**
  * str_concat - a function that contatenate two strings
  * @s1: the first string
  * @s2: the second string
  * Return: pointer to newly allocated space in memory
  */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, c;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	ptr = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);
	if (ptr == NULL)
		return (NULL);

	for (c = 0; c < (i + j + 1); c++)
		ptr[c] = s1 + s2;

	return (ptr);
}
