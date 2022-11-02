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

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (*(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				break;
			}
		}
		if (*(accept + j) == '\0')
			break;
	}

	return (i);
}
