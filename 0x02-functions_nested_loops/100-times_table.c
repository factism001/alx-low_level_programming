#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number of rows and columns to print.
 * If n is greater than 15 or less than 0,
 * the function will not print anything.
 */
void print_times_table(int n)
{
	int i, j, k;

	/*Check if n is out of range*/
	if (n < 0 || n > 15)
	{
		return;
	}

	char buffer[5];  /*buffer for storing a single number as a string*/

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int result = i * j;
			int index = 0;  /*index for writing characters to the buffer*/

			do {
				buffer[index++] = '0' + result % 10;  /*store the last digit in buffer*/
				result /= 10;  /* remove the last digit from the result*/
			} while (result != 0);  /* repeat until the result is 0*/

			/* print the buffer in reverse order.*/
			for (k = index - 1; k >= 0; k--)
			{
				_putchar(buffer[k]);
			}
			_putchar(' ');  /* print a space after each number*/
		}
		_putchar('\n');  /* print a newline after each row*/
	}
}
