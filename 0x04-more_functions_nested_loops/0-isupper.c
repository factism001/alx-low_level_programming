#include "main.h"
/**
  * _isupper - function that checks for uppercase character
  * @c: character to be checked
  * Return: 1 if character is uppercase, 0 if otherwise
  */
int _isupper(int c)
{
	int c;

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
