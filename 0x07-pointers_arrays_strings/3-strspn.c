#include "main.h"
/**
  * _strspn - a function that gets the length of a prefix substring.
  * @s: string to be checked
  * @accept: the characters to look for
  * Return: lenght of first segment 's' checked
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int bytes = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (*(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				bytes++;
				break;
			}

			else if (*(accept + j) == '\0')
				return (bytes);
		}
	}

	return (bytes);
}
