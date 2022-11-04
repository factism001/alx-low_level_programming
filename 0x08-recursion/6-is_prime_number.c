#include "main.h"
/**
  * is_prime_number - checks if 'n' is an integer
  * @n: given integer
  * Return: prime numbers
  */
int is_prime_number(int n)
{
	if (n % 10 == 0)
		return (1);
	else
		return (0);
	return (0 + is_prime_number((n % 10) + 1));
}
