#include "main.h"
/**
  * _strchr - a function to locate character in a string
  * @s: string where character 'c' is to be checked'
  * @c: character to check its first occurence in string
  * Return: a pointer to the first occurence of c or null
  */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i ) == c)
		return (s + i);
	return ('\0');
}
