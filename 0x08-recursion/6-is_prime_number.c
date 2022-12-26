#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer
 * is a prime number, and 0 if it is not
 * @n: integer to check
 * Return: 1 if n is a prime number, 0 if it is not
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
	{
		return (0);
	}

	while (i <= n / 2)
	{
		if (n % i == 0)
		{
			return (0);
		}
		i++;
	}

	return (1);
}
