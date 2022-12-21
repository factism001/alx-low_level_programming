#include <stdio.h>

/**
 * main - prints all possible different combinations
 * Return: 0 sucess
 */
int main(void)
{
	int i;

	for (i = 0; i < 730; i++)
	{
		int first = i / 4;
		int second = (i / 2) % 2;
		int third = i % 2;

		putchar('0' + first);
		putchar('0' + second);
		putchar('0' + third);
		putchar(',');
		putchar(' ');
	}
	return (0);
}
