#include "main.h"
/**
  * is_palindrome - checks if a string is a palindrome.
  * @s: string to check
  * Return: Returns '1' if string is a palindrome and '0' if not
  */
int is_palindrome(char *s)
{
	unsigned int lenght = 0;

	if (s[lenght] <= 0)
		return (1);
	else
		return (0);
	return (is_palindrome(s + 1));
}
