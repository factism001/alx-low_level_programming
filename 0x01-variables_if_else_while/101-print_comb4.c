#include <stdio.h>

/**
 * main - prints all possible different combinations
 * Return: 0 sucess
 */
int main(void)
{
	int i;
	int first = i / 81;
	int second = (i / 9) % 9;
	int third = i % 9;

	for (i = 0; i < 730; i++)
	{
		putchar('0' + first);
		putchar('0' + second);
		putchar('0' + third);
		putchar(',');
		putchar(' ');
	}
}
