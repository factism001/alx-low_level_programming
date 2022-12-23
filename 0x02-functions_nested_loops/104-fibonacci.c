#include <stdio.h>

/**
  * main - entry point
  * Return: Always 0 - sucess
  */
int main(void)
{
	/* Declare variables */
	int i, num1, num2, next;

	/* Initialize variables */
	num1 = 1;
	num2 = 2;

	/* Print the first two numbers */
	printf("%d, %d", num1, num2);

	/* Iterate through the remaining numbers */
	for (i = 3; i <= 98; i++)
	{
		/* Calculate the next number in the sequence */
		next = num1 + num2;

		/* Print the number, separated by a comma and a space */
		printf(", %d", next);

		/* Update the values of num1 and num2 */
		num1 = num2;
		num2 = next;
	}

	/* Print a newline at the end */
	printf("\n");

	return (0);
}
