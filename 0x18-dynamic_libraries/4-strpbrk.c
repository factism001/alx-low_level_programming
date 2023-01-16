#include "main.h"
/**
  * _strpbrk - searches a string for any of a set of byte.
  * @s: string that contains set of byte to check in
  * @accept: string containing acceptable characters to check for in 's'
  * Return: a pointer to the byte in s that matches one of the bytes in accept
  */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	char *p;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);
}
