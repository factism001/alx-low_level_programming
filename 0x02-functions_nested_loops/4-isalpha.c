#include "main.h"
/**
  * _isalpha - checks if character is alphabet
  * @c: The character to be checked
  * Return: 1 if character is an alphabet, 0 if otherwise
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
