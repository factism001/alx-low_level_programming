#include <stdio.h>
/**
  * main - entry point
  * code to print all possible single digit numbers followed by comma and space
  *Return: Always 0
  */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');

		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
