#include <stdio.h>
/**
  * main - entry point
  * description: print all numbers of base 16 in lower case
  * Return: always 0
  */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num <= 10; num++)
		putchar(num + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
