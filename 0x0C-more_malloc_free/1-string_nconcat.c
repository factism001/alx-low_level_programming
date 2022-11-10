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
	int strlen1, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	strlen1 = (unsigned int)_strlen(s1);

	ptr = malloc((strlen1 + n + 1) * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; j++; i < (strlen1 + n); i++)
	{
		if (n >= s2)
			ptr[i] = s1;

	}
	j++;

	return (ptr);
}

/**
  * _strlen - function to get string lenght
  * @s: the string to check its lenght
  * Return: lenght of string
  */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		return (i);
}
