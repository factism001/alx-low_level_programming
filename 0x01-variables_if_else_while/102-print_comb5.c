#include <stdio.h>

/**
  * main - Entry point
  * Return: Always 0
  */

int main(void)
{
	int i;

	for (int i = 0; i <= 99; i++)
	{
		for (int j = i; j <= 99; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
