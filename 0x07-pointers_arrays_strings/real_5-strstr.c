#include "main.h"
/**
  * _strstr - locates a substring
  * @haystack: the string to search
  * @needle: the substring to check for
  * Return: a pointer to the beginning of the located substring, or NULL
  */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	char *pneedle;

	i = 0;

	while (haystack[i] != '\0')
	{
		j = 0;

		while (needle[j] != '\0')
		{
			if (haystack[i] == needle[j] && haystack[i] != '\0' && needle[j] != '\0')
			{
				pneedle = &needle[j];
				return (pneedle);
			}
			j++;
		}
		i++;
	}

	return ('\0');

}
