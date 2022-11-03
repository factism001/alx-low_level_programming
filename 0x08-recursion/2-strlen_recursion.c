#include "main.h"
/**
  * _strlen_recursion - a function that returns lenght of string
  * @s: the string to check
  * Return: the lenght of string
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (_strlen_recursion(s + 1));
}
