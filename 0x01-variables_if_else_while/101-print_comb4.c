#include <stdio.h>

/**
 * print_combinations - prints all possible different combinations
 */
void print_combinations(void)
{
	for (int i = 0; i <= 9; i++)
	{
		putchar('0' + i / 4);
		putchar('0' + (i / 2) % 2);
		putchar('0' + i % 2);
		putchar(',');
		putchar(' ');
	}
}
