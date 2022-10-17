#include <stdio.h>
/**
* main - entry point
* description: possible different combinations of two digits
* Return: Always 0
*/
int main(void)
{
	int first, second;

	first = 48;
	second = 48;

	while (second < 58)
	{
		first = 48;
	while (first < 58)
	{
		putchar(second);
		putchar(first);
		if (first == 57 && second == 57)
		{
			putchar(',');
			putchar(' ');
			first++;
		}
	}
	second++;
	}
	putchar('\n');

	return (0);
}
