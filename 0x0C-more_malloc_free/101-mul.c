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
	int n, i, j;

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

	for (i = 0; num1[i] < 9; num1++)
		;
	for (j = 0; num2[j] < 9; num2++)
		;
	num1[i] * num2[j] = mul

	printf("%d\n", mul);

	return (mul);
}
