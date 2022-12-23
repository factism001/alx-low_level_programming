#include <stdio.h>

/**
 * main - main entry
  * Return: Always 0
  */
int main(void)
{
	/* Declare variables */
	int i, sum;

	/* Initialize variables */
	sum = 0;

	/* Iterate through the numbers below 1024 */
	for (i = 1; i < 1024; i++)
	{
		/* Check if the number is a multiple of 3 or 5 */
		if (i % 3 == 0 || i % 5 == 0)
		{
			/* If it is, add it to the sum */
			sum += i;
		}
	}
	/* Print the sum */
	printf("%d\n", sum);

	return (0);
}
