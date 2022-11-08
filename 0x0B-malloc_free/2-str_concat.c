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

	for (i = 0; str1[i] != '\0'; i++)
		;
	for (j = 0; str2[j] != '\0; j++)
		;

	ptr = ((i * sizeof(*str1) + (j * (sizeof(str2)) + 1);
				if (ptr == NULL)
				return (NULL);

				for (c = 0; c < (i + j + 1); c++)
				ptr[c] = str1 + str2;
				return (ptr);
}
