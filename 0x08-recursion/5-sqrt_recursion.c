#include "main.h"
/**
  * _sqrt_recursion - a function that returns the natural
  * square root of a number
  * @n: The number to find its square root
  * Return: the natural square root
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (n * _sqrt_recursion(n % 10));
}
