#include "main.h"
/**
  * _islower - Checks for lowercase character
  * Return: 1 if character is lowercase, 0 if otherwise
  * @c: The character to be checked
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
