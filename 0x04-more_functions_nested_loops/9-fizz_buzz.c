#include <stdio.h>
/**
  * main - prints number from 1 -100, followed by new line
  * For multiples of 3 'Fizz' is prinyed instead of number
  * For multiples of 5 'Buzz' is printed
  * for multiple of both 3 and 5, 'FizzBuzz' is printed
  * Return: Always 0
  */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (num % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (num % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", num);
		}
	}
	printf("\n");
	return (0);
}
