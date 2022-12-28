#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 * @n: the number of bytes of s2 to include in the concatenated string
 * Return: a pointer to the concatenated string, or NULL if the function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t s1_len = 0;
	if (s1)
	{
		char *p = s1;
		while (*p)
		{
			s1_len++;
			p++;
		}
	}

	size_t s2_len = 0;
	if (s2)
	{
		char *p = s2;
		while (*p)
		{
			s2_len++;
			p++;
		}
	}

	if (n >= s2_len)
	{
		n = s2_len;
	}

	char *concat_str = malloc(s1_len + n + 1);
	if (!concat_str)
	{
		return (NULL);
	}

	char *p = concat_str;
	if (s1)
	{
		while (*s1)
		{
			*p = *s1;
			p++;
			s1++;
		}
	}
	if (s2)
	{
		while (n-- > 0)
		{
			*p = *s2;
			p++;
			s2++;
		}
	}

	*p = '\0';

	return (concat_str);
}

/**
 * free - deallocates the memory pointed to by ptr, which was previously
 * allocated using malloc. If ptr is NULL, the function does nothing. If ptr
 * was not allocated using malloc, the behavior of this function is undefined.
 *
 * @ptr: the memory to deallocate
 */
void free(void *ptr);
