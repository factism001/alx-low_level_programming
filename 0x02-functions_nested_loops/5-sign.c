#include "main.h"
/**
  * print_sign - prints the sign of a number
  * @n: the number to be checked
  * Return: 1 of the number is greater than zero
  *	    0 if the number is zero
  *	    -1 if the number is les than zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return ('-1');
	}
}
