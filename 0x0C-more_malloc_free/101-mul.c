#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  * mul - function that multiplies two numbers
  * @num1: the first number
  * @num2: the second number
  * Return: pointer to the function
  */
int main(int argc, char *argv[])
{
	int i, j;

	if (!isdigit(argv[1] && argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	if (argc < 3)

	{
		printf("Error\n");
		exit(98);
	}

	for (i = 0; argv[i] !='\0'; i ++)
		;
	for (j = 0; argv[j] != '\0'; j++)
		argv[i][j] = mul;

	printf("%d\n", mul);

	return (mul);
}
