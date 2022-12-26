#include "main.h"

/**
 *is_prime_number_recursive - returns 1 if the input integer
 * is a prime number, and 0 if it is not
 * is_prime_number - detects if number is prime number
 * @n: integer to check
 * @i: integer to check for divisibility
 *
 * Return: 1 if n is a prime number, 0 if it is not
 */
int is_prime_number_recursive(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	} else if (i > n / 2)
	{
		return (1);
	} else if (n % i == 0)
	{
		return (0);
	}

	return (is_prime_number_recursive(n, i + 1));
}

/**
  * is_prime_number - detects if number is prime number
  * @n: input number.
  * Return: 1 if n is a prime number. 0 if n is not a prime number.
  */
int is_prime_number(int n)
{
	return (is_prime_number_recursive(n, 2));
}
