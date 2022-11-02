#include "main.h"
/**
  * _strspn - a function that gets the length of a prefix substring.
  * @s: string to be checked
  * @accept: the characters to look for
  * Return: lenght of first segment 's' checked
  */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	i = 0;
	c = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				c++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}

	return (c);
}
