#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  * mul - function that multiplies two numbers
  * @num1: the first number
  * @num2: the second number
  * Return: pointer to the function
  */
int mul(int num1, int num2)
{
	int ptr;
	int n;

	if (!isdigit(num1 && num2))
	{
		printf("Error\n");
		exit(98);
	}

	n = num1 && num2;

	if ((n != num1) && (n != num2))
	{
		printf("Error\n");
		exit(98);
	}

	for (num1 = 0; num1 < 9; num1++)
		;
	for (num2 = 0; num2 < 9; num2++)
		;
	ptr = mul = num1 * num2;

	printf("%d\n", ptr);

	return (mul);
}
