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
	int lenght = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (*(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				lenght++;
			break;
		}
	}

	return (lenght++);
}
